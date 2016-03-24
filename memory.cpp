#include "memory.h"

Cmemory::Cmemory()
{
	
}

Cmemory::~Cmemory()
{
	
}

/*
#define MMIO_READ8(Address) (*(volatile UINT8*)(Address))
#define MMIO_WRITE8(Address,Value) (*(volatile UINT8*)(Address)=(Value))
#define MMIO_READ16(Address) (*(volatile UINT16*)(Address))
#define MMIO_WRITE16(Address,Value) (*(volatile UINT16*)(Address)=(Value))
#define MMIO_READ32(Address) (*(volatile UINT32*)(Address))
#define MMIO_WRITE32(Address,Value) (*(volatile UINT32*)(Address)=(Value))
#define MMIO_READ64(Address) (*(volatile UINT64*)(Address))
#define MMIO_WRITE64(Address,Value) (*(volatile UINT64*)(Address)=(Value))

#define MMIO_OR8(Address, Value)  (*(volatile UINT8*)(Address) |= (Value))
#define MMIO_OR16(Address, Value) (*(volatile UINT16*)(Address) |= (Value))
#define MMIO_OR32(Address, Value) (*(volatile UINT32*)(Address) |= (Value))
#define MMIO_OR64(Address, Value) (*(volatile UINT64*)(Address) |= (Value))

#define MMIO_AND8(Address, Value)  (*(volatile UINT8*)(Address) &= (Value))
#define MMIO_AND16(Address, Value) (*(volatile UINT16*)(Address) &= (Value))
#define MMIO_AND32(Address, Value) (*(volatile UINT32*)(Address) &= (Value))
#define MMIO_AND64(Address, Value) (*(volatile UINT64*)(Address) &= (Value))

#define MMIO_ANDOR8(Address, AndData, OrData)   (*(volatile UINT8*)(Address))  = (*(volatile UINT8*)(Address)  & (AndData) | (OrData))
#define MMIO_ANDOR16(Address, AndData, OrData)  (*(volatile UINT16*)(Address)) = (*(volatile UINT16*)(Address) & (AndData) | (OrData))
#define MMIO_ANDOR32(Address, AndData, OrData)  (*(volatile UINT32*)(Address)) = (*(volatile UINT32*)(Address) & (AndData) | (OrData))
#define MMIO_ANDOR64(Address, AndData, OrData)  (*(volatile UINT64*)(Address)) = (*(volatile UINT32*)(Address) & (AndData) | (OrData))
*/

UINT8  Cmemory::read(UINT64 address,UINT8 * out)
{
	* out=(*(volatile UINT8*)(address));
	return * out;
}

UINT16 Cmemory::read(UINT64 address,UINT16 *out)
{
	* out=(*(volatile UINT16*)(address));
	return * out;	
}

UINT32 Cmemory::read(UINT64 address,UINT32 *out)
{
	* out=(*(volatile UINT32*)(address));
	return * out;	
}

UINT64 Cmemory::read(UINT64 address,UINT64 *out)
{
	* out=(*(volatile UINT64*)(address));
	return * out;	
}

void Cmemory::write(UINT64 address,UINT8 data)
{
	(*(volatile UINT8*)(address)=(data));
}

void Cmemory::write(UINT64 address,UINT16 data)
{
	(*(volatile UINT16*)(address)=(data));
}

void Cmemory::write(UINT64 address,UINT32 data)
{
	(*(volatile UINT32*)(address)=(data));
}

void Cmemory::write(UINT64 address,UINT64 data)
{
	(*(volatile UINT64*)(address)=(data));
}

void * Cmemory::setMem(void * buf,UINTN length ,UINT8 data)
{
	return SetMem(buf,length,data);
}

void * Cmemory::setMem(void * buf,UINTN length ,UINT16 data)
{
	return SetMem16(buf,length,data);
}

void * Cmemory::setMem(void * buf,UINTN length ,UINT32 data)
{
	return SetMem32(buf,length,data);
}

void * Cmemory::setMem(void * buf,UINTN length ,UINT64 data)
{
	return SetMem64(buf,length,data);
}

void *Cmemory::scanMem (void  *buf,UINTN length,UINT8 data)
{
	return ScanMem8(buf,length,data);
}

void *Cmemory::scanMem (void  *buf,UINTN length,UINT16 data)
{
	return ScanMem16(buf,length,data);
}

void *Cmemory::scanMem (void  *buf,UINTN length,UINT32 data)
{
	return ScanMem32(buf,length,data);
}

void *Cmemory::scanMem (void  *buf,UINTN length,UINT64 data)
{
	return ScanMem64(buf,length,data);
}

void * Cmemory::copyMem(void *desbuf,void * srcbuf,UINTN length)
{
	return CopyMem(desbuf,srcbuf,length);
}

void * Cmemory::zeroMem(void * buf,UINTN length)
{
	return ZeroMem(buf,length);
}

INTN Cmemory::cmpMem(const void *destBuf, const void *srcBuf,UINTN length)
{
	return CompareMem(destBuf,srcBuf,length);
}

GUID * Cmemory::copyGuid (GUID *dest,GUID  *src)
{
	return CopyGuid(dest,src);
}

BOOLEAN Cmemory::cmpGuid(GUID  *guid1,GUID  *guid2)
{
	return CompareGuid(guid1,guid2);
}

void *Cmemory::scanGuid (void *buf,UINTN length,const GUID  *guid)
{
	return ScanGuid(buf,length,guid);
}

