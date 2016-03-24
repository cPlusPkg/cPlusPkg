#ifndef D_MSR_H
#define D_MSR_H

extern "C" {
#include <Library/BaseLib.h>
};

#include "object.h"

class Cmsr:public Cobject
{
public:
	Cmsr();
	~Cmsr();
	
	UINT32 read(UINT32 index,UINT32 *out);
	UINT64 read(UINT32 index,UINT64 *out);
	
	UINT32 write(UINT32 index,UINT32 data);
	UINT64 write(UINT32 index,UINT64 data);
	
	UINT32 or(UINT32 index,UINT32 data);
	UINT64 or(UINT32 index,UINT64 data);

	UINT32 and(UINT32 index,UINT32 data);		
	UINT64 and(UINT32 index,UINT64 data);

};

#endif
