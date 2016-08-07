
#include "MillerNull.h"

#include <maya/MFnPlugin.h>
#include <maya/MDrawRegistry.h>
#include <maya/MShaderManager.h>



MStatus initializePlugin( MObject obj ) {

	MString AE = {
		"global proc AEmillerNullTemplate( string $nodeName ) {"

		"editorTemplate -beginScrollLayout;"

			"editorTemplate -collapse false -beginLayout ""Icon Shape"";"

				"editorTemplate -addControl ""icon"";"
				"editorTemplate -addControl ""size"";"

				"editorTemplate -addSeparator;"
				"editorTemplate -addControl ""shaded"";"
				"editorTemplate -addControl ""selectShaded"";"
				"editorTemplate -addControl ""shadedOpacity"";"
		
				"editorTemplate -addSeparator;"
				"editorTemplate -addControl ""wireframe"";"
				"editorTemplate -addControl ""wireframeTone"";"

				"editorTemplate -addSeparator;"
				"editorTemplate -addControl ""translation"";"
				"editorTemplate -addControl ""rotation"";"
				"editorTemplate -addControl ""scale"";"

			"editorTemplate -endLayout;"

			"AEgeometryShapeTemplate $nodeName;"

			"editorTemplate -suppress ""localPosition"";"
			"editorTemplate -suppress ""localScale"";"

			"editorTemplate -addExtraControls;"
			
		"editorTemplate -endScrollLayout;"

		"}"
	};

	MGlobal::executeCommand(AE);

	MStatus   status;
	MFnPlugin plugin(obj, "Travis Miller");

	status = plugin.registerNode("millerNull", MillerNull::id, MillerNull::creator, MillerNull::initialize, MPxNode::kLocatorNode, &MillerNull::drawDbClassification);
	if (!status) {
		status.perror("registerNode");
		return status;
	}

	status = MHWRender::MDrawRegistry::registerGeometryOverrideCreator( MillerNull::drawDbClassification, MillerNull::drawRegistrantId, MillerNullOverride::Creator);
	if (!status) {
		status.perror("registerDrawOverrideCreator");
		return status;
	}

	// create shared vertex/index buffers
	MillerNullOverride::setupBuffers();

	return status;
}


MStatus uninitializePlugin( MObject obj) {
	MStatus   status;
	MFnPlugin plugin( obj );

	status = MHWRender::MDrawRegistry::deregisterGeometryOverrideCreator(MillerNull::drawDbClassification, MillerNull::drawRegistrantId);
	if (!status) {
		status.perror("deregisterDrawOverrideCreator");
		return status;
	}


	status = plugin.deregisterNode( MillerNull::id );
	if (!status) {
		status.perror("deregisterNode");
		return status;
	}


	// destroy shared vertex/index buffers
	MillerNullOverride::destroyBuffers();


	return status;
}
