// Filename: Texture.cpp
#include "Texture.h"

// class constructor
Texture::Texture()
{
	// initialize members and pointers
	m_texture = 0;
}

// copy of class constructor
Texture::Texture(const Texture& other)
{
}

// class destructor
Texture::~Texture()
{
}

// initialize textures
bool Texture::Initialize(ID3D11Device* device, WCHAR* filename)
{
	HRESULT result;


	// Load the texture in.
	result = D3DX11CreateShaderResourceViewFromFile(device, filename, NULL, NULL, &m_texture, NULL);
	if(FAILED(result))
	{
		return false;
	}

	return true;
}


void Texture::Shutdown()
{
	// Release the texture resource.
	if(m_texture)
	{
		m_texture->Release();
		m_texture = 0;
	}

	return;
}


ID3D11ShaderResourceView* Texture::GetTexture()
{
	return m_texture;
}