#ifndef D_MEMEORY_H
#define D_MEMEORY_H

extern "C" {
#include <Library/BaseMemoryLib.h>
};

#include "object.h"

class Cmemory:public Cobject
{
public:
	Cmemory();
	~Cmemory();

	UINT8  read(UINT64 address,UINT8 * out);
	UINT16 read(UINT64 address,UINT16 *out);
	UINT32 read(UINT64 address,UINT32 *out);
	UINT64 read(UINT64 address,UINT64 *out);
	
	void write(UINT64 address,UINT8  data);
	void write(UINT64 address,UINT16 data);
	void write(UINT64 address,UINT32 data);
	void write(UINT64 address,UINT64 data);	
	
	void * setMem(void * buf,UINTN length ,UINT8 data);
	void * setMem(void * buf,UINTN length ,UINT16 data);
	void * setMem(void * buf,UINTN length ,UINT32 data);
	void * setMem(void * buf,UINTN length ,UINT64 data);
	
	void  *scanMem (void  *buf,UINTN length,UINT8  data);	
	void  *scanMem (void  *buf,UINTN length,UINT16 data);	
	void  *scanMem (void  *buf,UINTN length,UINT32 data);	
	void  *scanMem (void  *buf,UINTN length,UINT64 data);
	
	void * copyMem(void *desbuf,void * srcbuf,UINTN length);
	void * zeroMem(void * buf,UINTN length);
	INTN  cmpMem(const void *destBuf, const void *srcBuf,UINTN length);
	
	GUID * copyGuid (GUID *dest,GUID  *src);
	BOOLEAN cmpGuid(GUID  *guid1,GUID  *guid2);
	void *scanGuid (void *buf,UINTN length,const GUID  *guid);
};
#endif 
