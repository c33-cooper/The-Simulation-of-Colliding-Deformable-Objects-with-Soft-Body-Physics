// Filename: Input.h
#ifndef _INPUT_H_
#define _INPUT_H_

// PRE-PROCESSING DIRECTIVES
#define DIRECTINPUT_VERSION 0x0800

// Link libraries
#pragma comment(lib, "dinput8.lib")
#pragma comment(lib, "dxguid.lib")

// INCLUDE Headers
#include <dinput.h>

// Class name: InputClass
class Input
{
public:
	// class constructor/destructor
	Input();
	Input(const Input&);
	~Input();

	// Input framework functions
	bool Initialize(HINSTANCE, HWND, int, int);
	void Shutdown();
	bool Frame();

	// Mouse input
	void GetMouseLocation(int&, int&);

	// Key pressed functions
	bool IsEscapePressed();
	bool IsLeftPressed();
	bool IsRightPressed();
	bool IsUpPressed();
	bool IsDownPressed();
	bool IsAPressed();
	bool IsZPressed();
	bool IsPgUpPressed();
	bool IsPgDownPressed();
	bool IsF2Pressed();

private:
	// Input device functions
	bool ReadKeyboard();
	bool ReadMouse();
	void ProcessInput();

private:
	// Input members and pointers
	IDirectInput8* m_directInput;
	IDirectInputDevice8* m_keyboard;
	IDirectInputDevice8* m_mouse;

	unsigned char m_keyboardState[256];
	DIMOUSESTATE m_mouseState;

	int m_screenWidth, m_screenHeight;
	int m_mouseX, m_mouseY;
};

#endif