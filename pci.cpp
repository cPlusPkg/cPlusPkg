
#include "pci.h"

Cpci::Cpci()
{

}

Cpci::~Cpci()
{
	
}

UINT8  Cpci::read(UINTN address,UINT8 * out)
{
	* out=PciRead8(address);
	return * out;
}

UINT16 Cpci::read(UINTN address,UINT16 *out)
{
	* out=(UINT16)PciRead16(address);
	return * out;
}

UINT32 Cpci::read(UINTN address,UINT32 *out)
{
	* out=(UINT32)PciRead32(address);
	return * out;
}

void Cpci::write(UINTN address,UINT8  data)
{
	PciWrite8(address,data);
}

void Cpci::write(UINTN address,UINT16 data)
{
	PciWrite16(address,data);	
}

void Cpci::write(UINTN address,UINT32 data)
{
	PciWrite32(address,data);	
}

UINT8  Cpci::and (UINTN address,UINT8 data)
{
	return PciAnd8(address,data);	
}

UINT16 Cpci::and (UINTN address,UINT16 data)
{
	return PciAnd16(address,data);	
}

UINT32 Cpci::and (UINTN address,UINT32 data)
{
	return PciAnd32(address,data);
}


UINT8  Cpci::or (UINTN address,UINT8  data)
{
	return PciOr8(address,data);	
}

UINT16 Cpci::or (UINTN address,UINT16 data)
{
	return PciOr16(address,data);	
}

UINT32 Cpci::or (UINTN address,UINT32 data)
{
	return PciOr32(address,data);
}

UINT8  Cpci::andOr(UINTN address,UINT8  andData,UINT8  orData)
{
	return PciAndThenOr8 (address,andData,orData);
}

UINT16 Cpci::andOr(UINTN address,UINT16 andData,UINT16 orData)
{
	return PciAndThenOr16 (address,andData,orData);
}

UINT32 Cpci::andOr(UINTN address,UINT32 andData,UINT32 orData)
{
	return PciAndThenOr32 (address,andData,orData);
}
