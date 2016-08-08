
#include "IconFactory.h"




Icon::Icon() {
    this->initShaders();
    this->shaded = false;
    this->selectShaded = false;
    this->wireframe = true;
}

Icon::~Icon() {}


void Icon::initShaders() {
    MHWRender::MRenderer *renderer = MHWRender::MRenderer::theRenderer();
    if (!renderer)
        return;

    const MHWRender::MShaderManager *shaderMgr = renderer->getShaderManager();
    if (!shaderMgr)
        return;

    if (this->shadedShader == nullptr)
        this->shadedShader = shaderMgr->getStockShader(MHWRender::MShaderManager::k3dSolidShader);

    if (this->wireframeShader == nullptr)
        this->wireframeShader = this->shadedShader->clone();
}


void Icon::offsetMatrix() {
    this->tfmOffset.setTranslation(this->posOffset, MSpace::kWorld);
    this->tfmOffset.setRotation(this->rotOffset, MTransformationMatrix::RotationOrder::kXYZ);
    this->tfmOffset.setScale(this->sclOffset, MSpace::kWorld);
}


void Icon::setIconType(int &type) {
    this->iconType = type;
}


void Icon::setIconSize(double &size) {
    this->size = size;
    this->sclOffset[0] *= size;
    this->sclOffset[1] *= size;
    this->sclOffset[2] *= size;
}


void Icon::setShadedColor(float *color) {
    this->shadedColor[0] = color[0];
    this->shadedColor[1] = color[1];
    this->shadedColor[2] = color[2];
}


void Icon::setTranslation(MVector &translation) {
    this->posOffset = translation;
}


void Icon::setRotation(double rotation[3]) {
    this->rotOffset[0] = rotation[0];
    this->rotOffset[1] = rotation[1];
    this->rotOffset[2] = rotation[2];
}


void Icon::setScale(double scale[3]) {
    this->sclOffset[0] = scale[0] * this->size;
    this->sclOffset[1] = scale[1] * this->size;
    this->sclOffset[2] = scale[2] * this->size;
}


void Icon::setShadedShader() {
    if (this->shadedShader == nullptr)
        this->initShaders();

    this->shadedShader->setIsTransparent(this->shadedOpacity != 1.0);
    float color[4] {this->shadedColor[0], this->shadedColor[1], this->shadedColor[2], this->shadedOpacity};
    this->shadedShader->setParameter("solidColor", color);
}


void Icon::setWireframeShader() {
    if (this->wireframeShader == nullptr)
        this->initShaders();

    float color[4] {this->shadedColor[0] * this->wireframeTone,
                    this->shadedColor[1] * this->wireframeTone,
                    this->shadedColor[2] * this->wireframeTone, 1.0};

    this->wireframeShader->setParameter("solidColor", color);
}
