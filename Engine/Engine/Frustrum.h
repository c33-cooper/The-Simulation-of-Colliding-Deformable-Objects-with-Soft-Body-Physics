// Frustrum.h

// Header guards
#ifndef _FRUSTUM_H_
#define _FRUSTUM_H_

// Include headers
#include <d3dx10math.h>

class Frustrum
{
public:
	Frustrum();
	Frustrum(const Frustrum&);
	~Frustrum();

	// Member function prototypes
	void ConstructFrustum(float, D3DXMATRIX, D3DXMATRIX);

	// Check frustum
	bool CheckPoint(float, float, float);
	bool CheckCube(float, float, float, float);
	bool CheckSphere(float, float, float, float);
	bool CheckRectangle(float, float, float, float, float, float);

private:
	D3DXPLANE m_planes[6];
};

#endif