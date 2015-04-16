// SkydomeShader.h is the interface for the skydomes shader.

// header guards
#ifndef _SKYDOMESHADER_H_
#define _SKYDOMESHADER_H_

// include headers
#include <d3d11.h>
#include <D3DX10math.h>
#include <D3DX11async.h>
#include <fstream>

// include headers
#include "Skydome.h"

using namespace std;

class SkyDomeShader : Skydome
{
private:
	struct MatrixBufferType
	{
		// three different matrix types
		D3DXMATRIX world;
		D3DXMATRIX view;
		D3DXMATRIX projection;
	};

	struct GradientBufferType
	{
		D3DXVECTOR4 apexColor;
		D3DXVECTOR4 centerColor;
	};

public:
	// class constructor/destructor
	SkyDomeShader();
	SkyDomeShader(const SkyDomeShader&);
	virtual ~SkyDomeShader();

	// framework functions
	bool Initialize(ID3D11Device*, HWND);
	void Shutdown();
	bool Render(ID3D11DeviceContext*, int, D3DXMATRIX, D3DXMATRIX, D3DXMATRIX, D3DXVECTOR4, D3DXVECTOR4);

private:
	// shader/graphics functions
	bool InitializeShader(ID3D11Device*, HWND, WCHAR*, WCHAR*);
	void ShutdownShader();
	void OutputShaderErrorMessage(ID3D10Blob*, HWND, WCHAR*);

	bool SetShaderParameters(ID3D11DeviceContext*, D3DXMATRIX, D3DXMATRIX, D3DXMATRIX, D3DXVECTOR4, D3DXVECTOR4);
	void RenderShader(ID3D11DeviceContext*, int);

private:
	// shader attributes
	ID3D11VertexShader* m_vertexShader;
	ID3D11PixelShader* m_pixelShader;
	ID3D11InputLayout* m_layout;
	ID3D11Buffer* m_matrixBuffer;
	ID3D11Buffer* m_gradientBuffer;
};

#endif