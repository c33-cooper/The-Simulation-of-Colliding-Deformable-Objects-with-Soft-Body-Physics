// CarChassisShader.h is the interface for the graphics shader
// of the automobile.

// header guards
#ifndef _CARCHASSISSHADER_H_
#define _CARCHASSISSHADER_H_

// include headers
#include "ShaderManager.h"

class CarChassisShader : public ShaderManager
{
public:
	// class constructor/destructor
	CarChassisShader();
	CarChassisShader(const CarChassisShader&);
	~CarChassisShader();

protected:
};

#endif