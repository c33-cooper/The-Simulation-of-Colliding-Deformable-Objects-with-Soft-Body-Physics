// Filename: Texture.h
#ifndef _TEXTURE_H_
#define _TEXTURE_H_

// Include headers
#include <d3d11.h>
#include <d3dx11tex.h>

// Class name: Texture
class Texture
{
public:
	// class constructor/destructor
	Texture();
	Texture(const Texture&);
	~Texture();

	// texture framework functions
	bool Initialize(ID3D11Device*, WCHAR*);
	void Shutdown();

	// texture accessors
	ID3D11ShaderResourceView* GetTexture();

private:
	// texture pointers
	ID3D11ShaderResourceView* m_texture;
};

#endif