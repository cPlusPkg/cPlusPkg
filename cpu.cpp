#include "cpu.h"

Ccpu::Ccpu()
{
	
}

Ccpu::~Ccpu()
{
	
}

UINT32 Ccpu::cpuid(UINT32 index,UINT32 *eax,UINT32 *ebx,UINT32 *ecx,UINT32 *edx)
{
	return AsmCpuid(index,eax,ebx,ecx,edx);
}

UINT32 Ccpu::cpuid(UINT32 index, UINT32 subIndex,UINT32 *eax,UINT32 *ebx,UINT32 *ecx,UINT32 *edx)
{
	return AsmCpuidEx(index,subIndex,eax,ebx,ecx,edx);
}

UINT64 Ccpu::readMm0()
{
	return AsmReadMm0();
}

UINT64 Ccpu::readMm1()
{
	return AsmReadMm1();
}

UINT64 Ccpu::readMm2()
{
	return AsmReadMm2();
}

UINT64 Ccpu::readMm3()
{
	return AsmReadMm3();
}

UINT64 Ccpu::readMm4()
{
	return AsmReadMm4();
}

UINT64 Ccpu::readMm5()
{
	return AsmReadMm5();
}

UINT64 Ccpu::readMm6()
{
	return AsmReadMm6();
}

UINT64 Ccpu::readMm7()
{
	return AsmReadMm7();
}

void Ccpu::writeMm0(UINT64 data)
{
	AsmWriteMm0(data);
}
void Ccpu::writeMm1(UINT64 data)
{
	AsmWriteMm1(data);
}
void Ccpu::writeMm2(UINT64 data)
{
	AsmWriteMm2(data);
}
void Ccpu::writeMm3(UINT64 data)
{
	AsmWriteMm3(data);
}
void Ccpu::writeMm4(UINT64 data)
{
	AsmWriteMm4(data);
}
void Ccpu::writeMm5(UINT64 data)
{
	AsmWriteMm5(data);
}
void Ccpu::writeMm6(UINT64 data)
{
	AsmWriteMm6(data);
}
void Ccpu::writeMm7(UINT64 data)
{
	AsmWriteMm7(data);
}

UINT64 Ccpu::readTsc()
{
	return AsmReadTsc();
}

void Ccpu::readGdtr(IA32_DESCRIPTOR * gdtr)
{
	AsmReadGdtr(gdtr);
}

void Ccpu::writeGdtr(IA32_DESCRIPTOR * gdtr)
{
	AsmWriteGdtr(gdtr);
}

void Ccpu::readIdtr(IA32_DESCRIPTOR * idtr)
{
	AsmReadIdtr(idtr);
}

void Ccpu::writeIdtr(const IA32_DESCRIPTOR * idtr)
{
	AsmWriteIdtr(idtr);
}

UINT16 Ccpu::readLdtr()
{
	AsmReadLdtr();
}

UINT16 Ccpu::writeLdtr(UINT16 ldtr)
{
	AsmWriteLdtr(ldtr);
}

UINT16 Ccpu::readTr()
{
	return AsmReadTr();
}

UINT16 Ccpu::readSs()
{
	return AsmReadSs();
}

UINT16 Ccpu::readGs()
{
	return AsmReadGs();
}

UINT16 Ccpu::readFs()
{
	return AsmReadFs();
}

UINT16 Ccpu::readEs()
{
	return AsmReadEs();
}

UINT16 Ccpu::readDs()
{
	return AsmReadDs();
}

UINT16 Ccpu::readCs()
{
	return AsmReadCs();
}


UINTN Ccpu::readDr0()
{
	return AsmReadDr0();
}

UINTN Ccpu::readDr1()
{
	return AsmReadDr1();
}

UINTN Ccpu::readDr2()
{
	return AsmReadDr2();
}

UINTN Ccpu::readDr3()
{
	return AsmReadDr3();
}

UINTN Ccpu::readDr4()
{
	return AsmReadDr4();
}

UINTN Ccpu::readDr5()
{
	return AsmReadDr5();
}

UINTN Ccpu::readDr6()
{
	return AsmReadDr6();
}

UINTN Ccpu::readDr7()
{
	return AsmReadDr7();
}

UINTN Ccpu:: writeDr0(UINTN  dr)
{
	return AsmWriteDr0(dr);
}
UINTN Ccpu:: writeDr1(UINTN  dr)
{
	return AsmWriteDr1(dr);
}

UINTN Ccpu:: writeDr2(UINTN  dr)
{
	return AsmWriteDr2(dr);
}

UINTN Ccpu:: writeDr3(UINTN  dr)
{
	return AsmWriteDr3(dr);
}

UINTN Ccpu:: writeDr4(UINTN  dr)
{
	return AsmWriteDr4(dr);
}

UINTN Ccpu:: writeDr5(UINTN  dr)
{
	return AsmWriteDr5(dr);
}

UINTN Ccpu:: writeDr6(UINTN  dr)
{
	return AsmWriteDr6(dr);
}

UINTN Ccpu:: writeDr7(UINTN  dr)
{
	return AsmWriteDr7(dr);
}

UINTN Ccpu:: readCr0()
{
	return AsmReadCr0();
}

/*
UINTN Ccpu:: readCr1()
{
	return AsmReadCr1();
}
*/

UINTN Ccpu:: readCr2()
{
	return AsmReadCr2();
}

UINTN Ccpu:: readCr3()
{
	return AsmReadCr3();
}

UINTN Ccpu:: readCr4()
{
	return AsmReadCr4();
}

UINTN Ccpu:: writeCr0(UINTN  cr)
{
	return AsmWriteCr0(cr);
}

/*
UINTN Ccpu:: writeCr1(UINTN  cr)
{
	return AsmWriteCr1(cr);
}
*/
UINTN Ccpu:: writeCr2(UINTN  cr)
{
	return AsmWriteCr2(cr);
}

UINTN Ccpu:: writeCr3(UINTN  cr)
{
	return AsmWriteCr3(cr);
}

UINTN Ccpu:: writeCr4(UINTN  cr)
{
	return AsmWriteCr4(cr);
}

UINTN Ccpu::readEflags()
{
	return AsmReadEflags();
}

void Ccpu::disableCache()
{
	AsmDisableCache();
}

void Ccpu::enableCache()
{
	AsmEnableCache();
}
