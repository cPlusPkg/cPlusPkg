#include "msr.h"

Cmsr::Cmsr()
{
	
}

Cmsr::~Cmsr()
{
	
}

UINT32 Cmsr::read(UINT32 index,UINT32 *out)
{
	*out=AsmReadMsr32(index);
	return *out;
}

UINT64 Cmsr::read(UINT32 index,UINT64 *out)
{
	*out=AsmReadMsr64(index);
	return *out;
}

UINT32 Cmsr::write(UINT32 index,UINT32 data)
{
	return AsmWriteMsr32(index,data);
}

UINT64 Cmsr::write(UINT32 index,UINT64 data)
{
	return AsmWriteMsr64(index,data);
}

UINT32 Cmsr::or(UINT32 index,UINT32 data)
{
	return AsmMsrOr32(index,data);
}

UINT64 Cmsr::or(UINT32 index,UINT64 data)
{
	return AsmMsrOr64(index,data);
}

UINT32 Cmsr::and(UINT32 index,UINT32 data)
{
	return AsmMsrAnd32(index,data);
}

UINT64 Cmsr::and(UINT32 index,UINT64 data)
{
	return AsmMsrAnd64(index,data);
}

