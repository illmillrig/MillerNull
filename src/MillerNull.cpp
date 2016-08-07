
#include "MillerNull.h"
#include "IconShapes.h"

#include <maya/MPlug.h>
#include <maya/MDataBlock.h>
#include <maya/MDataHandle.h>
#include <maya/MGlobal.h>
#include <maya/MDistance.h>
#include <maya/MShaderManager.h>
#include <maya/MHWGeometryUtilities.h>
#include <maya/MFnDependencyNode.h>


MTypeId MillerNull::id( 0x00121BC9 );

MString MillerNull::drawDbClassification( "drawdb/geometry/MillerNull" );
MString MillerNull::drawRegistrantId( "millerNullPlugin" );

MObject MillerNull::icon;
MObject MillerNull::shaded;
MObject MillerNull::selectShaded;
MObject MillerNull::shadedOpacity;
MObject MillerNull::wireframe;
MObject MillerNull::wireframeTone;
MObject MillerNull::posOffset;
MObject MillerNull::rotationX;
MObject MillerNull::rotationY;
MObject MillerNull::rotationZ;
MObject MillerNull::rotation;
MObject MillerNull::sclOffset;
MObject MillerNull::size;


MColor MillerNull::DEFAULT_COLOR = MColor(0.9, 0.3, 0.0);


MillerNull::MillerNull(){}


MillerNull::~MillerNull(){}


void MillerNull::postConstructor() {
	MStatus stat;
	MFnDependencyNode fn (thisMObject(), &stat);
	CHECK_MSTATUS(stat);

	stat = fn.findPlug("useObjectColor").setShort(2);
	CHECK_MSTATUS(stat);

	stat = fn.findPlug("wireColorR").setFloat(MillerNull::DEFAULT_COLOR.r);
	CHECK_MSTATUS(stat);

	stat = fn.findPlug("wireColorG").setFloat(MillerNull::DEFAULT_COLOR.g);
	CHECK_MSTATUS(stat);

	stat = fn.findPlug("wireColorB").setFloat(MillerNull::DEFAULT_COLOR.b);
	CHECK_MSTATUS(stat);
}


void MillerNull::draw(M3dView & view, const MDagPath & path, M3dView::DisplayStyle style, M3dView::DisplayStatus status) { }


void* MillerNull::creator(){
	return new MillerNull();
}


MStatus MillerNull::quickAddAttribute(MObject attr){
	MStatus stat = MillerNull::addAttribute(attr);
	CHECK_MSTATUS_AND_RETURN_IT(stat)
	return stat;
}


MStatus MillerNull::initialize(){
	MStatus	stat;
	MFnNumericAttribute fnNum;
	MFnEnumAttribute fnEnum;
	MFnUnitAttribute fnUnit;

	MillerNull::icon = fnEnum.create("icon", "icon");

	for (size_t i=0; i < IconShapes::icons.size(); i++)
		fnEnum.addField(IconShapes::iconNames[i], (short)i);
	fnEnum.setDefault(Icon::defaultIconType);
	fnEnum.setKeyable(true);
	fnEnum.setStorable(true);

	MillerNull::shaded = fnNum.create("shaded", "shaded", MFnNumericData::kBoolean, true);
	fnNum.setKeyable(true);
	fnNum.setStorable(true);

	MillerNull::selectShaded = fnNum.create("selectShaded", "selectShaded", MFnNumericData::kBoolean, false);
	fnNum.setKeyable(true);
	fnNum.setStorable(true);

	MillerNull::shadedOpacity = fnNum.create("shadedOpacity", "shadedOpacity", MFnNumericData::kFloat, 0.2);
	fnNum.setKeyable(true);
	fnNum.setStorable(true);
	fnNum.setMin(0.0);
	fnNum.setMax(1.0);

	MillerNull::wireframe = fnNum.create("wireframe", "wireframe", MFnNumericData::kBoolean, true);
	fnNum.setKeyable(true);
	fnNum.setStorable(true);

	MillerNull::wireframeTone = fnNum.create("wireframeTone", "wireframeTone", MFnNumericData::kFloat, 1.0);
	fnNum.setKeyable(true);
	fnNum.setStorable(true);
	fnNum.setMin(0.0);
	fnNum.setMax(2.0);

	MillerNull::posOffset = fnNum.createPoint("translation", "translation");
	fnNum.setKeyable(true);
	fnNum.setStorable(true);

	MillerNull::rotationX = fnUnit.create("rotationX", "rotationX", MFnUnitAttribute::kAngle, 0.0);
	MillerNull::rotationY = fnUnit.create("rotationY", "rotationY", MFnUnitAttribute::kAngle, 0.0);
	MillerNull::rotationZ = fnUnit.create("rotationZ", "rotationZ", MFnUnitAttribute::kAngle, 0.0);
	MillerNull::rotation = fnNum.create("rotation", "rotation", MillerNull::rotationX, MillerNull::rotationY, MillerNull::rotationZ);
	fnNum.setKeyable(true);
	fnNum.setStorable(true);

	MillerNull::sclOffset = fnNum.createPoint("scale", "scale");
	fnNum.setDefault(1.0, 1.0, 1.0);
	fnNum.setKeyable(true);
	fnNum.setStorable(true);

	MillerNull::size = fnUnit.create("size", "size", MFnUnitAttribute::kDistance);
	fnUnit.setDefault(MDistance(1.0));
	fnUnit.setKeyable(true);
	fnUnit.setStorable(true);

	quickAddAttribute(MillerNull::icon);
	quickAddAttribute(MillerNull::shaded);
	quickAddAttribute(MillerNull::selectShaded);
	quickAddAttribute(MillerNull::shadedOpacity);
	quickAddAttribute(MillerNull::wireframe);
	quickAddAttribute(MillerNull::wireframeTone);
	quickAddAttribute(MillerNull::posOffset);
	quickAddAttribute(MillerNull::rotation);
	quickAddAttribute(MillerNull::sclOffset);
	quickAddAttribute(MillerNull::size);

	return MS::kSuccess;

}


bool MillerNull::isBounded() const {
	return true;
}


MBoundingBox MillerNull::boundingBox() const {

	MPlug sizePlug(thisMObject(), MillerNull::size);
	double size = sizePlug.asMDistance().asCentimeters();

	size *= 0.5;
	MBoundingBox bb(MPoint(-size, -size, -size), MPoint(size, size, size));

	MPlug translatePlug(thisMObject(), MillerNull::posOffset);
	MVector posOffset{ translatePlug.child(0).asDouble(),
					   translatePlug.child(1).asDouble(),
					   translatePlug.child(2).asDouble() };

	MPlug rotatePlug(thisMObject(), MillerNull::rotation);
	double rotOffset[3]{ rotatePlug.child(0).asDouble(),
						 rotatePlug.child(1).asDouble(),
						 rotatePlug.child(2).asDouble() };

	MPlug scalePlug(thisMObject(), MillerNull::sclOffset);
	double sclOffset[3]{ scalePlug.child(0).asDouble(),
						 scalePlug.child(1).asDouble(),
						 scalePlug.child(2).asDouble() };

	MTransformationMatrix tfm;
	tfm.setTranslation(posOffset, MSpace::kWorld);
	tfm.setRotation(rotOffset, MTransformationMatrix::RotationOrder::kXYZ);
	tfm.setScale(sclOffset, MSpace::kWorld);

	bb.transformUsing(tfm.asMatrix());

	return bb;
}












//-----------------------------------------------------------
//  DRAWING OVERRIDE
//-----------------------------------------------------------

std::array<IconBuffer, 10> MillerNullOverride::iconBuffers;


MillerNullOverride::MillerNullOverride(const MObject& obj) : MHWRender::MPxGeometryOverride(obj),
										icon(), locatorNode(obj), dirtyStream(true), dirtyIndex(true) {
}

MillerNullOverride::~MillerNullOverride(){ }


void MillerNullOverride::updateDG() {
	this->updateDisplay();
	this->updateIcon();
	this->updateSize();
	this->updateOpacity();
	this->updateColor();
	this->updateTranslation();
	this->updateRotation();
	this->updateScale();
}


void MillerNullOverride::updateDisplay() {

	MPlug shadedPlug(this->locatorNode, MillerNull::shaded);
	bool shaded = shadedPlug.asBool();
	if (shaded != this->icon.shaded) {
		this->icon.setShadedDisplay(shaded);
		this->dirtyStream = true;
	}

	MPlug selectShadedPlug(this->locatorNode, MillerNull::selectShaded);
	bool selectShaded = selectShadedPlug.asBool();
	if (selectShaded != this->icon.selectShaded) {
		this->icon.setSelectShaded(selectShaded);
		this->dirtyStream = true;
	}

	MPlug wireframePlug(this->locatorNode, MillerNull::wireframe);
	bool wireframe = wireframePlug.asBool();
	if (wireframe != this->icon.wireframe) {
		this->icon.setWireframeDisplay(wireframe);
		this->dirtyStream = true;
	}
}


void MillerNullOverride::updateIcon() {

	MPlug iconPlug(this->locatorNode, MillerNull::icon);
	int iconType = iconPlug.asInt();

	if (iconType != this->icon.iconType) {
		this->icon.setIconType(iconType);
		this->dirtyStream = true;
		this->dirtyIndex = true;
	}
}


void MillerNullOverride::updateSize() {

	MPlug sizePlug(this->locatorNode, MillerNull::size);
	float size = sizePlug.asFloat();

	if (size != this->icon.size) {
		this->icon.setIconSize(size);
		this->dirtyStream = true;
	}
}


void MillerNullOverride::updateOpacity() {

	MPlug shadedOpacityPlug(this->locatorNode, MillerNull::shadedOpacity);
	float shadedOpacity = shadedOpacityPlug.asFloat();

	if (shadedOpacity != this->icon.shadedOpacity)
		this->icon.setShadedOpacity(shadedOpacity);


	MPlug wireframeTonePlug(this->locatorNode, MillerNull::wireframeTone);
	float wireframeTone = wireframeTonePlug.asFloat();

	if (wireframeTone != this->icon.wireframeTone)
		this->icon.setWireframeTone(wireframeTone);
}


void MillerNullOverride::updateColor() {

	MColor color = MHWRender::MGeometryUtilities::wireframeColor( MDagPath::getAPathTo(this->locatorNode) );
	float  rgb[3] = { color.r, color.g, color.b };

	if (rgb != this->icon.shadedColor)
		this->icon.setShadedColor(rgb);
}


void MillerNullOverride::updateTranslation() {

	MPlug translatePlug(this->locatorNode, MillerNull::posOffset);

	MVector posOffset{ translatePlug.child(0).asDouble(),
					   translatePlug.child(1).asDouble(),
					   translatePlug.child(2).asDouble() };

	if (posOffset != this->icon.posOffset) {
		this->icon.setTranslation(posOffset);
		this->dirtyStream = true;
	}
}


void MillerNullOverride::updateRotation() {

	MPlug rotatePlug(this->locatorNode, MillerNull::rotation);
	double rotOffset[3]{ rotatePlug.child(0).asDouble(),
							rotatePlug.child(1).asDouble(),
							rotatePlug.child(2).asDouble() };

	if (rotOffset != this->icon.rotOffset) {
		this->icon.setRotation(rotOffset);
		this->dirtyStream = true;
	}
}


void MillerNullOverride::updateScale() {

	MPlug scalePlug(this->locatorNode, MillerNull::sclOffset);
	double sclOffset[3]{ scalePlug.child(0).asDouble(),
						  scalePlug.child(1).asDouble(),
						  scalePlug.child(2).asDouble() };

	if (sclOffset != this->icon.sclOffset) {
		this->icon.setScale(sclOffset);
		this->dirtyStream = true;
	}
}


MHWRender::MRenderItem *MillerNullOverride::makeRenderItem( MString name,
															MHWRender::MRenderItem::RenderItemType geoType,
															MHWRender::MGeometry::Primitive primitive,
															MHWRender::MGeometry::DrawMode drawMode ) {

	MHWRender::MRenderItem* renderItem = MHWRender::MRenderItem::Create( name, geoType, primitive );
	renderItem->setDrawMode(drawMode);
	renderItem->depthPriority(5);
	return renderItem;
}


void MillerNullOverride::updateRenderItems(const MDagPath& dagPath, MHWRender::MRenderItemList& renderList) {

	//Shaded
	MHWRender::MRenderItem *shadedRenderItem = nullptr;

	int shadedItemIndex = renderList.indexOf("iconShaded");
	if (shadedItemIndex < 0){
		shadedRenderItem = this->makeRenderItem("iconShaded",
 												this->icon.geoType,
												MHWRender::MGeometry::kTriangles,
												this->icon.drawMode);
		renderList.append(shadedRenderItem);
	}
	else
		shadedRenderItem = renderList.itemAt(shadedItemIndex);


	if (!this->icon.shaded)
		shadedRenderItem->enable(false);
	else {
		shadedRenderItem->enable(true);

		if (this->dirtyStream) {
			this->icon.offsetMatrix();
			MMatrix mat = this->icon.tfmOffset.asMatrix();
			shadedRenderItem->setMatrix( &mat );

			this->icon.setShadedShader();
			shadedRenderItem->setShader(this->icon.shadedShader);
		}

		if (this->icon.selectShaded)
			shadedRenderItem->setSelectionMask( MSelectionMask::kSelectLocators );
		else
			shadedRenderItem->setSelectionMask( MSelectionMask{} );

	}


	//Wireframe
	MHWRender::MRenderItem* wireRenderItem = nullptr;

	int wireItemIndex = renderList.indexOf("iconWireframe");
	if (wireItemIndex < 0) {
		wireRenderItem = this->makeRenderItem("iconWireframe",
											  this->icon.geoType,
											  MHWRender::MGeometry::kLines,
                                              this->icon.drawMode);

		renderList.append(wireRenderItem);
	}
	else
		wireRenderItem = renderList.itemAt(wireItemIndex);


	if (!this->icon.wireframe)
		wireRenderItem->enable(false);
	else {
		wireRenderItem->enable(true);

		if (this->dirtyStream) {
			this->icon.offsetMatrix();
			MMatrix mat = this->icon.tfmOffset.asMatrix();

			wireRenderItem->setMatrix( &mat );
			wireRenderItem->setSelectionMask(MSelectionMask::kSelectLocators);

			this->icon.setWireframeShader();
			wireRenderItem->setShader(this->icon.wireframeShader);

		}

	}

}


void MillerNullOverride::populateGeometry( const MHWRender::MGeometryRequirements &requirements,
											const MHWRender::MRenderItemList &renderItems,
											MHWRender::MGeometry &data ) {

	const MHWRender::MVertexBufferDescriptorList *descriptorList = &requirements.vertexRequirements();

	for (int i=0; i < descriptorList->length(); i++) {
		MHWRender::MVertexBufferDescriptor descriptor;
		descriptorList->getDescriptor(i, descriptor);

		if (descriptor.semantic() == MHWRender::MGeometry::kPosition)
			data.addVertexBuffer( MillerNullOverride::iconBuffers[this->icon.iconType].positions );

		else if (descriptor.semantic() == MHWRender::MGeometry::kNormal)
			data.addVertexBuffer( MillerNullOverride::iconBuffers[this->icon.iconType].normals );

	}

	for (int j = 0; j < renderItems.length() ; ++j) {
		MHWRender::MRenderItem const *renderItem = renderItems.itemAt(j);

		if (renderItem->primitive() == MHWRender::MGeometry::Primitive::kLines)
			renderItem->associateWithIndexBuffer( MillerNullOverride::iconBuffers[this->icon.iconType].edgeIndices );

		else if (renderItem->primitive() == MHWRender::MGeometry::Primitive::kTriangles)
			renderItem->associateWithIndexBuffer( MillerNullOverride::iconBuffers[this->icon.iconType].triIndices );
	}

	this->dirtyStream = false;
	this->dirtyIndex = false;

}


void MillerNullOverride::setupBuffers() {

	MHWRender::MVertexBufferDescriptor vertexDescriptor{ "", MHWRender::MGeometry::kPosition, MHWRender::MGeometry::kFloat, 3 };
	MHWRender::MVertexBufferDescriptor normalDescriptor{ "", MHWRender::MGeometry::kNormal, MHWRender::MGeometry::kFloat, 3 };
	unsigned int bufferSize;

	for (size_t i=0; i < IconShapes::icons.size() ; ++i) {

		// Vertex Buffers----------------------------------------
		MillerNullOverride::iconBuffers[i].positions = new MHWRender::MVertexBuffer{ vertexDescriptor };
		bufferSize = static_cast<unsigned int>( IconShapes::icons[i].positions.size() );
		float* vertDataAddress = (float*)MillerNullOverride::iconBuffers[i].positions->acquire( bufferSize, true );

		for (size_t vtx=0; vtx < bufferSize; vtx++) {
			vertDataAddress[(vtx * 3)] 	   = IconShapes::icons[i].positions[vtx][0];
			vertDataAddress[(vtx * 3) + 1] = IconShapes::icons[i].positions[vtx][1];
			vertDataAddress[(vtx * 3) + 2] = IconShapes::icons[i].positions[vtx][2];
		}

		MillerNullOverride::iconBuffers[i].positions->commit(vertDataAddress);


		// Normals Buffers----------------------------------------
		MillerNullOverride::iconBuffers[i].normals = new MHWRender::MVertexBuffer{ normalDescriptor };
		bufferSize = static_cast<unsigned int>( IconShapes::icons[i].normals.size() );
		float* normalDataAddress = (float*)MillerNullOverride::iconBuffers[i].normals->acquire( bufferSize, true );

		for (size_t vtx=0; vtx < bufferSize; vtx++) {
			normalDataAddress[(vtx * 3)] 	 = IconShapes::icons[i].normals[vtx][0];
			normalDataAddress[(vtx * 3) + 1] = IconShapes::icons[i].normals[vtx][1];
			normalDataAddress[(vtx * 3) + 2] = IconShapes::icons[i].normals[vtx][2];
		}

		MillerNullOverride::iconBuffers[i].normals->commit(normalDataAddress);


		// Triangle Index Buffers----------------------------------------
		MillerNullOverride::iconBuffers[i].triIndices = new MHWRender::MIndexBuffer{ MHWRender::MGeometry::kUnsignedInt32 };
		bufferSize = static_cast<unsigned int>( IconShapes::icons[i].triIndices.size() );
		unsigned int* triIndicesDataAddress = (unsigned int*)MillerNullOverride::iconBuffers[i].triIndices->acquire( bufferSize, true );

		for (size_t j=0; j < bufferSize; j++)
			triIndicesDataAddress[j] = IconShapes::icons[i].triIndices[j];

		MillerNullOverride::iconBuffers[i].triIndices->commit(triIndicesDataAddress);


		// Edge Index Buffers----------------------------------------
		MillerNullOverride::iconBuffers[i].edgeIndices = new MHWRender::MIndexBuffer{ MHWRender::MGeometry::kUnsignedInt32 };
		bufferSize = static_cast<unsigned int>( IconShapes::icons[i].edgeIndices.size() );
		unsigned int* edgeIndicesDataAddress = (unsigned int*)MillerNullOverride::iconBuffers[i].edgeIndices->acquire( bufferSize, true );

		for (size_t j=0; j < bufferSize; j++)
			edgeIndicesDataAddress[j] = IconShapes::icons[i].edgeIndices[j];

		MillerNullOverride::iconBuffers[i].edgeIndices->commit(edgeIndicesDataAddress);

	}


}


void MillerNullOverride::destroyBuffers() {

	for (size_t i=0; i < MillerNullOverride::iconBuffers.size() ; ++i) {
		if (MillerNullOverride::iconBuffers[i].positions != nullptr){
			delete MillerNullOverride::iconBuffers[i].positions;
		}

		if (MillerNullOverride::iconBuffers[i].normals != nullptr){
			delete MillerNullOverride::iconBuffers[i].normals;
		}

		if (MillerNullOverride::iconBuffers[i].triIndices != nullptr){
			delete MillerNullOverride::iconBuffers[i].triIndices;
		}

		if (MillerNullOverride::iconBuffers[i].edgeIndices != nullptr){
			delete MillerNullOverride::iconBuffers[i].edgeIndices;
		}

	}

}













