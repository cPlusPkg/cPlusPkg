#ifndef D_CPU_H
#define D_CPU_H

extern "C" {
#include <Library/BaseLib.h>
};

#include "object.h"

class Ccpu:public Cobject
{
public:
	Ccpu();
	~Ccpu();
	
	UINT32 cpuid(UINT32 index,UINT32 *eax,UINT32 *ebx,UINT32 *ecx,UINT32 *edx);
	UINT32 cpuid(UINT32 index, UINT32 subIndex,UINT32 *eax,UINT32 *ebx,UINT32 *ecx,UINT32 *edx);
	
	UINT64 readMm0();	
	UINT64 readMm1();	
	UINT64 readMm2();	
	UINT64 readMm3();	
	UINT64 readMm4();	
	UINT64 readMm5();	
	UINT64 readMm6();	
	UINT64 readMm7();
	
	void writeMm0(UINT64 data);	
	void writeMm1(UINT64 data);	
	void writeMm2(UINT64 data);	
	void writeMm3(UINT64 data);	
	void writeMm4(UINT64 data);	
	void writeMm5(UINT64 data);	
	void writeMm6(UINT64 data);	
	void writeMm7(UINT64 data);

	UINT64 readTsc();
	void readGdtr(IA32_DESCRIPTOR * gdtr);
	void writeGdtr(IA32_DESCRIPTOR * gdtr);
	
	void readIdtr(IA32_DESCRIPTOR * idtr);
	void writeIdtr(const IA32_DESCRIPTOR * idtr);
	UINT16 readLdtr();
	UINT16 writeLdtr(UINT16 ldtr);
	
	UINT16 readTr();
	UINT16 readSs();
	UINT16 readGs();	
	UINT16 readFs();
	UINT16 readEs();
	UINT16 readDs();
	UINT16 readCs();
	
	UINTN readEflags();
	void disableCache();
	void enableCache();
	
	UINTN readCr0();	
//	UINTN readCr1();	
	UINTN readCr2();	
	UINTN readCr3();	
	UINTN readCr4();
	
	UINTN writeCr0(UINTN  cr);	
//	UINTN writeCr1(UINTN  cr);	
	UINTN writeCr2(UINTN  cr);	
	UINTN writeCr3(UINTN  cr);
	UINTN writeCr4(UINTN  cr);
	
	UINTN readDr0();	
	UINTN readDr1();	
	UINTN readDr2();	
	UINTN readDr3();	
	UINTN readDr4();	
	UINTN readDr5();	
	UINTN readDr6();	
	UINTN readDr7();	

	UINTN writeDr0(UINTN  dr);
	UINTN writeDr1(UINTN  dr);
	UINTN writeDr2(UINTN  dr);
	UINTN writeDr3(UINTN  dr);
	UINTN writeDr4(UINTN  dr);
	UINTN writeDr5(UINTN  dr);
	UINTN writeDr6(UINTN  dr);
	UINTN writeDr7(UINTN  dr);
};

#endif 
