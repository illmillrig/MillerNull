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
    static void* creator();
    static void quickAddAttribute(MObject &attr, MStatus &stat);
    static MStatus	initialize();
    virtual bool isBounded() const override {return true;};
    virtual MBoundingBox boundingBox() const override;

public:
    static MTypeId id;
    static MString drawDbClassification;
    static MString drawRegistrantId;

    static MObject icon;
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
    virtual void cleanUp() override {}
    virtual MHWRender::DrawAPI supportedDrawAPIs() const override {return MHWRender::kAllDevices;}
    virtual bool hasUIDrawables() const override {return false;}
    virtual bool isIndexingDirty(const MHWRender::MRenderItem &item) override {return dirtyIndex;}
    virtual bool isStreamDirty(const MHWRender::MVertexBufferDescriptor &desc) override {return dirtyStream;}
    virtual void updateRenderItems(const MDagPath &dagPath, MHWRender::MRenderItemList& renderList) override;
    virtual void populateGeometry(const MHWRender::MGeometryRequirements &requirements,
                                  const MHWRender::MRenderItemList &renderItems,
                                  MHWRender::MGeometry &data) override;
    static void setupBuffers();
    static void destroyBuffers();

private:
    virtual void updateDG() override;
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


