// Fps.h

// Include headers
#include "Fps.h"

// Class constructor
Fps::Fps()
{
}

// copy of class constructor
Fps::Fps(const Fps& other)
{
}

// Class destructor
Fps::~Fps()
{
}

// Initialize Frames per second
void Fps::Initialize()
{
	// Initialize the counters and the start time.
	m_fps = 0;
	m_count = 0;
	m_startTime = timeGetTime();
	
	return;
}

// Frame ticks per second function
void Fps::Frame()
{
	m_count++;

	// If one second has passed then update the frame per second speed.
	if(timeGetTime() >= (m_startTime + 1000))
	{
		m_fps = m_count;
		m_count = 0;
		
		m_startTime = timeGetTime();
	}
}

// Return frames per second
int Fps::GetFps()
{
	return m_fps;
}