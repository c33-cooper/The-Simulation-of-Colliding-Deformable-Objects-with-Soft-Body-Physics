// ShaderManager.h is the interface for the base class that
// deals with all the shader information within the scene.

// header guards
#ifndef _SHADERMANAGER_H_
#define _SHADERMANAGER_H_

// include headers
#include <d3d11.h>
#include <D3DX10math.h>
#include <D3DX11async.h>
#include <fstream>

// namespace declaration
using namespace std;

// class ShaderManager
class ShaderManager
{
protected:
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
	ShaderManager();
	ShaderManager(const ShaderManager&);
	virtual ~ShaderManager();

	// framework functions
	bool Initialize(ID3D11Device*, HWND, WCHAR*, WCHAR*, LPCSTR, LPCSTR);
	void Shutdown();
	bool Render(ID3D11DeviceContext*, int, D3DXMATRIX, D3DXMATRIX, D3DXMATRIX, D3DXVECTOR4, D3DXVECTOR4);

protected:
	// shader/graphics functions
	bool InitializeShader(ID3D11Device*, HWND, WCHAR*, WCHAR*, LPCSTR, LPCSTR);
	void ShutdownShader();
	void OutputShaderErrorMessage(ID3D10Blob*, HWND, WCHAR*);

	bool SetShaderParameters(ID3D11DeviceContext*, D3DXMATRIX, D3DXMATRIX, D3DXMATRIX, D3DXVECTOR4, D3DXVECTOR4);
	void RenderShader(ID3D11DeviceContext*, int);

protected:
	// shader attributes
	ID3D11VertexShader* m_vertexShader;
	ID3D11PixelShader* m_pixelShader;
	ID3D11InputLayout* m_layout;
	ID3D11Buffer* m_matrixBuffer;
	ID3D11Buffer* m_gradientBuffer;
};

#endif