#pragma once 

#include "IconFactory.h"

#include <maya/MPxLocatorNode.h>
#include <maya/MHWGeometry.h>
#include <maya/MPxGeometryOverride.h>
#include <maya/MFnNumericAttribute.h>
#include <maya/MFnNumericData.h>
#include <maya/MFnEnumAttribute.h>
#include <maya/MFnUnitAttribute.h>
#include <maya/MTypeId.h> 


//---------------------------------------------------------------------

class MillerNull : public MPxLocatorNode {
public:
    MillerNull();
    virtual	~MillerNull();
    virtual void postConstructor() override;
    virtual MPxNode::SchedulingType schedulingType() const override {return MPxNode::kParallel;}
    virtual void draw(M3dView & view, const MDagPath & path,M3dView::DisplayStyle style, M3dView::DisplayStatus status);
    static  void* creator();
    static MStatus quickAddAttribute(MObject attr);
    static  MStatus	initialize();
    virtual bool isBounded() const;
    virtual MBoundingBox boundingBox() const;

public:
    static MTypeId id;
    static MString drawDbClassification;
    static MString drawRegistrantId;

    static MObject icon;
    static MObject shadedColor;
    static MObject shaded;
    static MObject selectShaded;
    static MObject shadedOpacity;
    static MObject wireframe;
    static MObject wireframeTone;
    static MObject posOffset;
    static MObject rotationX;
    static MObject rotationY;
    static MObject rotationZ;
    static MObject rotation;
    static MObject sclOffset;
    static MObject size;

    static MColor DEFAULT_COLOR;
};

//---------------------------------------------------------------------

struct IconBuffer{
    MHWRender::MVertexBuffer* positions;
    MHWRender::MVertexBuffer* normals;
    MHWRender::MIndexBuffer* triIndices;
    MHWRender::MIndexBuffer* edgeIndices;
};


class MillerNullOverride : public MHWRender::MPxGeometryOverride {
private:
    MillerNullOverride(const MObject& obj);
public:
    static MHWRender::MPxGeometryOverride *Creator(const MObject& obj) {return new MillerNullOverride(obj);}
    virtual ~MillerNullOverride();
    virtual MHWRender::DrawAPI supportedDrawAPIs() const {return MHWRender::kAllDevices;};
    virtual bool hasUIDrawables() const { return false; }
    virtual bool isIndexingDirty(const MHWRender::MRenderItem &item) { return dirtyIndex; }
    virtual bool isStreamDirty(const MHWRender::MVertexBufferDescriptor &desc) { return dirtyStream; }
    virtual void updateRenderItems(const MDagPath &dagPath, MHWRender::MRenderItemList& renderList);
    virtual void populateGeometry(const MHWRender::MGeometryRequirements &requirements,
                                  const MHWRender::MRenderItemList &renderItems,
                                  MHWRender::MGeometry &data);
    virtual void cleanUp() {};
    static void setupBuffers();
    static void destroyBuffers();

private:
    virtual void updateDG();
    virtual void updateDisplay();
    virtual void updateIcon();
    virtual void updateSize();
    virtual void updateOpacity();
    virtual void updateColor();
    virtual void updateTranslation();
    virtual void updateRotation();
    virtual void updateScale();

    static MHWRender::MRenderItem* makeRenderItem(MString name, MHWRender::MRenderItem::RenderItemType geoType,
                                                                MHWRender::MGeometry::Primitive primitive,
                                                                MHWRender::MGeometry::DrawMode drawMode);

private:
    Icon icon;
    MObject locatorNode;
    bool dirtyStream;
    bool dirtyIndex;

    static std::array<IconBuffer, 10> iconBuffers;

};

//---------------------------------------------------------------------


