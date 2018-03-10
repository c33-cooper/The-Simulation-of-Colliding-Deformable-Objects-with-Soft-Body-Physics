// Building.cpp is the implementation for the building class.

// include headers
#include "Building.h"

// class constrcutor
Building::Building() : GameObject()
{
	// Set the color at the top of the object.
	m_apexColor = D3DXVECTOR4(0.125f, 0.135f, 0.140f, 1.0f);
	// Set the color at the center of the object.
	m_centerColor = D3DXVECTOR4(0.27f, 0.100f, 0.140f, 1.0f);
}

// copy of class constructor
Building::Building(const Building& other)
{
}

// class destructor
Building::~Building()
{
}

