#pragma once

#include <maya/MGlobal.h>
#include <maya/MHWGeometry.h>
#include <maya/MViewport2Renderer.h>

#include <array>
#include <vector>
#include <utility>
#include <maya/MShaderManager.h>


class Icon {
public:
    Icon();
    ~Icon();
    void initShaders();
    void setShadedDisplay(bool &display) { this->shaded = display;}
    void setSelectShaded(bool &display) { this->selectShaded = display;}
    void setWireframeDisplay(bool &display) { this->wireframe = display;}
    void setShadedOpacity(float &opacity) { this->shadedOpacity = opacity;}
    void setWireframeTone(float &tone) { this->wireframeTone = tone;}
    void setIconType(int &type);
    void setIconSize(double &size);
    void setShadedColor(float *color);
    void setTranslation(MVector &translation);
    void setRotation(double rotation[3]);
    void setScale(double scale[3]);
    void setShadedShader();
    void setWireframeShader();
    void offsetMatrix();

public:
    static int defaultIconType = 2;
    int iconType = 2;

    // unfortunately having a shader instance per override slows the draw way down
    // but there doesn't seem to be a workaround
    MHWRender::MShaderInstance *shadedShader = nullptr;
    MHWRender::MShaderInstance *wireframeShader = nullptr;

    float shadedColor[3] {0.0f, 0.0f, 0.0f};
    float shadedOpacity = 0.2f;
    float wireframeTone = 1.0f;
    bool shaded;
    bool selectShaded;
    bool wireframe;
    double size = 1.0;
    MVector posOffset {0.0, 0.0, 0.0};
    double rotOffset[3] {0.0, 0.0, 0.0};
    double sclOffset[3] {1.0, 1.0, 1.0};
    MTransformationMatrix tfmOffset;
};

