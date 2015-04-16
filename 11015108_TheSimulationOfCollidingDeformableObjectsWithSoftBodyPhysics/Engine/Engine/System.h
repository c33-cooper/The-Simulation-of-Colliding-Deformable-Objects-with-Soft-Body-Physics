// System.h contains the handlers for the various libraries used
// throughout the application. Class is the interface for the back-end
// of the application and should not be altered. Performs operations such
// as setting up the window, this framework has been modeled around
// Microsoft's XNA C# Library.
#ifndef _SYSTEM_H_
#define _SYSTEM_H_

// Pre-Processor directives
#define WIN32_LEAN_AND_MEAN

// Include headers
#include <windows.h>

// Include class headers
#include "Application.h"

// Class name: System
class System
{
public:
	// class constructor/destructor
	System();
	System(const System&);
	~System();

	// framework loop functions
	bool Initialize();
	void Shutdown();
	void Run();

	LRESULT CALLBACK MessageHandler(HWND, UINT, WPARAM, LPARAM);

private:
	// Window Functions
	bool Frame();
	void InitializeWindows(int&, int&);
	void ShutdownWindows();

private:
	// Program Members and pointers
	LPCWSTR m_applicationName;
	HINSTANCE m_hinstance;
	HWND m_hwnd;
	Application* m_Application;
};


// // Main Window forward procedure callback function
static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

// GLOBALS
static System* ApplicationHandle = 0;


#endif