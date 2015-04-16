// Fps.h is the interface that calculates the application
// frames per second functionality.

// header guards
#ifndef _FPS_H_
#define _FPS_H_

// Link libraries
#pragma comment(lib, "winmm.lib")

// Include headers
#include <windows.h>
#include <mmsystem.h>

class Fps
{
public:
	// Class Constructor/destructor
	Fps();
	Fps(const Fps&);
	~Fps();

	// fps framework functions
	void Initialize();
	void Frame();
	int GetFps();

private:
	// FPS attributes
	int m_fps, m_count;
	unsigned long m_startTime;
};

#endif