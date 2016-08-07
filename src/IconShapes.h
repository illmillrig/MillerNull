#pragma once

#include <maya/MString.h>
#include <maya/MStringArray.h>

#include <vector>
#include <array>
#include <string>
#include <maya/MHWGeometry.h>


struct iconShape {
	std::vector< std::array<float, 3> > positions;
	std::vector< std::array<float, 3> > normals;
	std::vector<unsigned int> triIndices;
	std::vector<unsigned int> edgeIndices;
};


class IconShapes {
public:	
	static iconShape null;
	static iconShape cube;
	static iconShape sphere;
	static iconShape cone;
	static iconShape cylinder;
	static iconShape pyramid;
	static iconShape diamond;
	static iconShape wedge;
	static iconShape arrow;
	static iconShape house;

	static std::array<iconShape, 10> icons;
	static MString iconNames[10];

};



