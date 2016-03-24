#ifndef D_PCI_H
#define D_PCI_H

extern "C" {
#include <Library/PciLib.h>
};

#include "io.h"
#include "memory.h"

class Cpci
{
public:
	Cpci();
	~Cpci();
	UINT8  read(UINTN address,UINT8 * out);
	UINT16 read(UINTN address,UINT16 *out);
	UINT32 read(UINTN address,UINT32 *out);

	void write(UINTN address,UINT8  data);
	void write(UINTN address,UINT16 data);
	void write(UINTN address,UINT32 data);
	
	UINT8  and (UINTN address,UINT8  data);	
	UINT16 and (UINTN address,UINT16 data);	
	UINT32 and (UINTN address,UINT32 data);
	
	UINT8  or (UINTN address,UINT8  data);	
	UINT16 or (UINTN address,UINT16 data);	
	UINT32 or (UINTN address,UINT32 data);
	
	UINT8  andOr(UINTN address,UINT8  andData,UINT8  orData);	
	UINT16 andOr(UINTN address,UINT16 andData,UINT16 orData);	
	UINT32 andOr(UINTN address,UINT32 andData,UINT32 orData);
};

#endif //D_PCI_H
