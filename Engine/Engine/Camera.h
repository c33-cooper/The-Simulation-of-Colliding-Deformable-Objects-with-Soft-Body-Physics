// Camera.h is the interface for the main camera in the scene
// this will act as a first person view point of the user.

// header guards
#ifndef _CAMERA_H_
#define _CAMERA_H_

// Include headers
#include <d3dx10math.h>

class Camera
{
public:
	// class constructor/destructor
	Camera();
	Camera(const Camera&);
	~Camera();

	// position and rotation mutators
	void SetPosition(float, float, float);
	void SetRotation(float, float, float);

	// position and rotation accessors
	D3DXVECTOR3 GetPosition();
	D3DXVECTOR3 GetRotation();

	// render camera view
	void Render();
	void GetViewMatrix(D3DXMATRIX&);

private:
	// members and pointers
	float m_positionX, m_positionY, m_positionZ;
	float m_rotationX, m_rotationY, m_rotationZ;
	D3DXMATRIX m_viewMatrix;
};

#endif