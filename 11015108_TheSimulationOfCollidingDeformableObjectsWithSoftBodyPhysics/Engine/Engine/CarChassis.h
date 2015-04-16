// CarChassis.h is the interface for the base class CarChassis. The class
// holds the generic behavior for every object associated within the
// body of the automobile.

// header guards
#ifndef _CARCHASSIS_H_
#define _CARCHASSIS_H_

// include headers
#include "GameObject.h"
#include "Input.h"

class CarChassis : public GameObject
{
public:
	// constructor/destructor
	CarChassis();
	CarChassis(const CarChassis&);
	virtual ~CarChassis();

	// car chassis framework functions
	virtual void Update(float, bool);
	
	// Set Position functions
	virtual void SetPosition(float, float, float);
	virtual void SetRotation(float, float, float);

	virtual void GetPosition(float&, float&, float&);

	// Movement functions
	virtual void GoForward(float);
	virtual void GoBack(float);
	virtual void TurnLeft(float);
	virtual void TurnRight(float);

protected:
	// members and pointers
	float m_posX, m_posY, m_posZ;
};

#endif