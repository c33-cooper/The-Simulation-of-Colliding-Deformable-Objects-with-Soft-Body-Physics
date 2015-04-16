// CPU.h is the interface for the cpu utility
// functions of the application.

// header guards
#ifndef _CPU_H_
#define _CPU_H_

// Link libraries
#pragma comment(lib, "pdh.lib")

// Include headers
#include <pdh.h>

class CPU
{
public:
	// class constructor/destructor
	CPU();
	CPU(const CPU&);
	~CPU();

	// CPU framework functions
	void Initialize();
	void Shutdown();
	void Frame();
	int GetCpuPercentage();

private:
	// members and pointers
	bool m_canReadCpu;
	HQUERY m_queryHandle;
	HCOUNTER m_counterHandle;
	unsigned long m_lastSampleTime;
	long m_cpuUsage;
};

#endif