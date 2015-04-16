// Filename: Light.cpp
#include "Light.h"

// class constructor
Light::Light()
{
}

// copy of class constructor
Light::Light(const Light& other)
{
}

// class destructor
Light::~Light()
{
}

// light ambient color mutator
void Light::SetAmbientColor(float red, float green, float blue, float alpha)
{
	m_ambientColor = D3DXVECTOR4(red, green, blue, alpha);
	return;
}

// light diffuse color mutator
void Light::SetDiffuseColor(float red, float green, float blue, float alpha)
{
	m_diffuseColor = D3DXVECTOR4(red, green, blue, alpha);
	return;
}

// light ray direction mutator
void Light::SetDirection(float x, float y, float z)
{
	m_direction = D3DXVECTOR3(x, y, z);
	return;
}

// light ambient color accessors
D3DXVECTOR4 Light::GetAmbientColor()
{
	return m_ambientColor;
}

// light diffuse color accessors
D3DXVECTOR4 Light::GetDiffuseColor()
{
	return m_diffuseColor;
}

// light ray direction accessors
D3DXVECTOR3 Light::GetDirection()
{
	return m_direction;
}