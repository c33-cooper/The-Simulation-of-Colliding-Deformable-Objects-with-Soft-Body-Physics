// Skydome.cpp is the implementation for our skydome model

// include headers
#include "Skydome.h"

// class constructor
Skydome::Skydome() : GameObject()
{
	// initialize members and pointers
	// Set the color at the top of the sky dome.
	m_apexColor = D3DXVECTOR4(0.3f, 0.7f, 0.9f, 1.0f);

	// Set the color at the center of the sky dome.
	m_centerColor = D3DXVECTOR4(0.6f, 0.5f, 0.6f, 1.0f);
}

// copy constructor
Skydome::Skydome(const Skydome& other)
{
}

// destructor
Skydome::~Skydome()
{
}

// Render the sky dome
void Skydome::Render(ID3D11DeviceContext* deviceContext)
{
	// Render back up the hierarchy
	GameObject::Render(deviceContext);
}

// Update the SkyDome
void Skydome::Update(float dt, bool keydown)
{
	// Update back up the hierarchy
	GameObject::Update(dt, keydown);
}