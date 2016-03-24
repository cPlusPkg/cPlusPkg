#include "operator.h"

//simple c++ 'new' operator keyword note:BUF_LEN limit .
char	memory_buf[BUF_LEN];
static	size_t index = 0; 

void * __cdecl operator new(size_t size)
{
	if((index+size)>BUF_LEN) return 0;
	void* pAddress = (void*)&memory_buf[index];
	index += size;
	return pAddress;
}

void * __cdecl operator new[](size_t size)
{
	if((index+size)>BUF_LEN) return 0;
	void* pAddress = (void*)&memory_buf[index];
	index += size;
	return pAddress;
}
