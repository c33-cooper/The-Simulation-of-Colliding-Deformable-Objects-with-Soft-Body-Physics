// Filename: Terrain.h
#ifndef _TERRAIN_H_
#define _TERRAIN_H_

// Global attributes
const int TEXTURE_REPEAT = 8;

// Include headers
#include <d3d11.h>
#include <d3dx10math.h>
#include <stdio.h>

// Include headers
#include "Texture.h"

// Class name: Terrain
class Terrain
{
private:
	struct VertexType
	{
		D3DXVECTOR3 position;
		D3DXVECTOR2 texture;
	    D3DXVECTOR3 normal;
	};

	struct HeightMapType 
	{ 
		float x, y, z;
		float tu, tv;
		float nx, ny, nz;
	};

	struct VectorType 
	{ 
		float x, y, z;
	};

public:
	Terrain();
	Terrain(const Terrain&);
	~Terrain();

	bool Initialize(ID3D11Device*, char*, WCHAR*);
	void Shutdown();

	ID3D11ShaderResourceView* GetTexture();

	int GetVertexCount();
	void CopyVertexArray(void*);

private:
	bool LoadHeightMap(char*);
	void NormalizeHeightMap();
	bool CalculateNormals();
	void ShutdownHeightMap();

	void CalculateTextureCoordinates();
	bool LoadTexture(ID3D11Device*, WCHAR*);
	void ReleaseTexture();

	bool InitializeBuffers(ID3D11Device*);
	void ShutdownBuffers();
	
private:
	int m_terrainWidth, m_terrainHeight;
	HeightMapType* m_heightMap;
	Texture* m_Texture;
	int m_vertexCount;
	VertexType* m_vertices;
};

#endif