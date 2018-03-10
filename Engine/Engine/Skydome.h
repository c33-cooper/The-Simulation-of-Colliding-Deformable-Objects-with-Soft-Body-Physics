// Skydome.h is the interface for the Skydome class

// Header guards
#ifndef _SKYDOME_H_
#define _SKYDOME_H_

// include headers
#include "GameObject.h"

class Skydome : public GameObject
{
public:
	// Constructor/destructor
	Skydome();
	Skydome(const Skydome&);
	virtual ~Skydome();

	// framework functions
	virtual void Render(ID3D11DeviceContext*);
	virtual void Update(float, bool);

private:
};

#endif