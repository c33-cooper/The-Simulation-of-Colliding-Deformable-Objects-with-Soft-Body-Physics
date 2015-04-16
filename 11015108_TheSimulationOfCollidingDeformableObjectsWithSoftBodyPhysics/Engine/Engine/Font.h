// Font.h is the interface for the class that handles
// Font functionality.
#ifndef _FONT_H_
#define _FONT_H_

// Include headers
#include <d3d11.h>
#include <d3dx10math.h>
#include <fstream>

// namespace declaration
using namespace std;

// Include headers
#include "Texture.h"

class Font
{
private:
	// Font type structures
	struct FontType
	{
		float left, right;
		int size;
	};

	// Vertex strutcture type
	struct VertexType
	{
		D3DXVECTOR3 position;
	    D3DXVECTOR2 texture;
	};

public:
	// class constructor/destructor
	Font();
	Font(const Font&);
	~Font();

	// Font framework function
	bool Initialize(ID3D11Device*, char*, WCHAR*);
	void Shutdown();

	// Texture accessor
	ID3D11ShaderResourceView* GetTexture();

	// Function builds the vertex array
	void BuildVertexArray(void*, char*, float, float);

private:
	// Font data functions
	bool LoadFontData(char*);
	void ReleaseFontData();
	bool LoadTexture(ID3D11Device*, WCHAR*);
	void ReleaseTexture();

private:
	// members and pointers
	FontType* m_Font;
	Texture* m_Texture;
};

#endif