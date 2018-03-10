// GameObject.h is the interface for the base class of all gameobjects
// within the environment.

// header guards
#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_

// include headers
#include <d3d11.h>
#include <D3DX10math.h>
#include <fstream>

using namespace std;

// Base GameObject Class
class GameObject
{
protected:
	struct ModelType
	{
		float x, y, z;
		float tu, tv;
		float nx, ny, nz;
	};

	struct VertexType
	{
		D3DXVECTOR3 position;
	};

public:
	// Constructor/destructor
	GameObject();
	GameObject(const GameObject&);
	virtual ~GameObject();

	// framework functions
	bool Initialize(ID3D11Device*, char*);
	void Shutdown();
	virtual void Render(ID3D11DeviceContext*);
	virtual void Update(float, bool);

	// position functions
	virtual void SetPosition(float, float, float);
	virtual void GetPosition(float&, float&, float&);

	int GetIndexCount();

	// Color functions
	D3DXVECTOR4 GetApexColor();
	D3DXVECTOR4 GetCenterColor();

public:

protected:
	// Model functions
	bool LoadModel(char*);
	void ReleaseModel();

	// Graphics buffers functions
	bool InitializeBuffers(ID3D11Device*);
	void ReleaseBuffers();
	void RenderBuffers(ID3D11DeviceContext*);

protected:
	// Model members and pointers
	ModelType* m_model;
	int m_vertexCount, m_indexCount;
	ID3D11Buffer *m_vertexBuffer, *m_indexBuffer;
	D3DXVECTOR4 m_apexColor, m_centerColor;
	float m_positionX, m_positionY, m_positionZ;

	// GameObject translation, Scale and rotation attributes
	D3DXVECTOR3 scale;
	float yaw, pitch, roll;
};

#endif