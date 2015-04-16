// Building.h is the interface for the for the building class that
// are placed around the scene.

//header guards
#ifndef _BUILDING_H_
#define _BUILDING_H_

// include headers
#include "GameObject.h"
#include "Texture.h"

class Building : public GameObject
{
	public:
		// constructor/destructor
		Building();
		Building(const Building&);
		virtual ~Building();
};

#endif