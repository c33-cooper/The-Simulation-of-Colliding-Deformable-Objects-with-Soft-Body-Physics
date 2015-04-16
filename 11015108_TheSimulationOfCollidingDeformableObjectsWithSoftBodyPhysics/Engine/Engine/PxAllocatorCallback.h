// header guards
#ifndef _PXALLOCATORCALLBACK_H_
#define _PXALLOCATORCALLBACK_H_

class PxAllocatorCallback
{
public:
	virtual ~PxAllocatorCallback() {}
	virtual void* allocate(size_t size, const char* typeName, const char* filename,
		int line) = 0;
	virtual void deallocate(void* ptr) = 0;
};

#endif