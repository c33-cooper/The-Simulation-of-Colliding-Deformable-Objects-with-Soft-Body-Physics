// CarChassis.cpp is the implementation for the CarChassis class.

// include headers
#include "CarChassis.h"

// class constructor
CarChassis::CarChassis()
{
	// Initialize members
	m_posX = 0;
	m_posY = 0;
	m_posZ = 0;

	// Set the color at the top of the object.
	m_apexColor = D3DXVECTOR4(0.125f, 0.135f, 0.140f, 1.0f);
	// Set the color at the center of the object.
	m_centerColor = D3DXVECTOR4(0.27f, 0.100f, 0.140f, 1.0f);
}

// Copy of class constructor
CarChassis::CarChassis(const CarChassis& other)
{
}

// class destructor
CarChassis::~CarChassis()
{
}

// Update function
void CarChassis::Update(float dt, bool keydown)
{
	// Update back up the hierarchy
	GameObject::Update(dt, keydown);
}

// Set position of chassis
void CarChassis::SetPosition(float x, float y, float z)
{
	// set members
	m_posX = x;
	m_posY = y;
	m_posZ = z;

	// Re-set position back up the hierarchy
	GameObject::SetPosition(m_posX, m_posY, m_posZ);
}

// Set rotation of chassis
void CarChassis::SetRotation(float x, float y, float z)
{

}

// Get the values of the chassis position
void CarChassis::GetPosition(float& x, float& y, float& z)
{
	// Re-Initialize members
	x = m_posX;
	y = m_posY;
	z = m_posZ;

	// Re-get position back up the hierarchy
	GameObject::GetPosition(x, y, z);
}

// Move forward function
void CarChassis::GoForward(float dt)
{
	return;
}

// Go backwards function
void CarChassis::GoBack(float dt)
{
	return;
}

// Turn left function
void CarChassis::TurnLeft(float dt)
{
	return;
}

// Turn right function
void CarChassis::TurnRight(float dt)
{
	return;
}
