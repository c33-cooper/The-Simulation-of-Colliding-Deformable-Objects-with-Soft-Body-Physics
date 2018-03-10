// Timer.h is the interface for the timer class that calculates
// Frames per second and is used as as game timer.
#ifndef _TIMER_H_
#define _TIMER_H_

// Include headers
#include <windows.h>

// Class name: Timer
class Timer
{
public:
	// class constructor/destructor
	Timer();
	Timer(const Timer&);
	~Timer();

	// timer framework functions
	bool Initialize();
	void Frame();

	// timer accessors
	float GetTime();

private:
	// timer members and pointers
	INT64 m_frequency;
	float m_ticksPerMs;
	INT64 m_startTime;
	float m_frameTime;
};

#endif