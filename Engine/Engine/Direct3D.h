// Direct3D.h is the interface that sets up the DIRECTX
// graphics framework. Class inspired by RasterTek and XNA style c# Framework.
#ifndef _DIRECT3D_H_
#define _DIRECT3D_H_

// Link Libraries
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "d3dx11.lib")
#pragma comment(lib, "d3dx10.lib")

// Include headers
#include <dxgi.h>
#include <d3dcommon.h>
#include <d3d11.h>
#include <d3dx10math.h>

class Direct3D
{
public:
	// class constructor/destructor
	Direct3D();
	Direct3D(const Direct3D&);
	~Direct3D();

	// Initialize and shutdown Direct3d
	bool Initialize(int, int, bool, HWND, bool, float, float);
	void Shutdown();
	
	// Start and end rendering of the scene
	void BeginScene(float, float, float, float);
	void EndScene();

	// Direct3D device accessors
	ID3D11Device* GetDevice();
	ID3D11DeviceContext* GetDeviceContext();

	void GetProjectionMatrix(D3DXMATRIX&);
	void GetWorldMatrix(D3DXMATRIX&);
	void GetOrthoMatrix(D3DXMATRIX&);

	void GetVideoCardInfo(char*, int&);

	// Rendering tools
	void TurnZBufferOn();
	void TurnZBufferOff();
	void TurnOnAlphaBlending();
	void TurnOffAlphaBlending();
	void TurnOnWireframeMode();
	void TurnWireframeModeOff();

	// These two functions are used for turning on and off back face culling.
	void TurnOnCulling();
	void TurnOffCulling();

private:
	// members and pointers
	bool m_vsync_enabled;
	int m_videoCardMemory;
	char m_videoCardDescription[128];
	IDXGISwapChain* m_swapChain;
	ID3D11Device* m_device;
	ID3D11DeviceContext* m_deviceContext;
	ID3D11RenderTargetView* m_renderTargetView;
	ID3D11Texture2D* m_depthStencilBuffer;
	ID3D11DepthStencilState* m_depthStencilState;
	ID3D11DepthStencilView* m_depthStencilView;
	ID3D11RasterizerState* m_rasterState;
	ID3D11RasterizerState* m_rasterStateNoCulling;
	D3DXMATRIX m_projectionMatrix;
	D3DXMATRIX m_worldMatrix;
	D3DXMATRIX m_orthoMatrix;
	ID3D11DepthStencilState* m_depthDisabledStencilState;
	ID3D11BlendState* m_alphaEnableBlendingState;
	ID3D11BlendState* m_alphaDisableBlendingState;
};

#endif