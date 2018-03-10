// BuildingShader.h is the interface for the for the graphics shader
// associated with the placed buildings within the environment.

// header guards
#ifndef _BUILDINGSHADER_H_
#define _BUILDINGSHADER_H_

// include headers
#include "ShaderManager.h"

class BuildingShader : public ShaderManager
{
	public:
		// class constructor/destructor
		BuildingShader();
		BuildingShader(const BuildingShader&);
		~BuildingShader();
};

#endif