#include "CplusDxe.h"

extern "C" EFI_STATUS EFIAPI CplusDxeDriverEntryPoint (
	IN EFI_HANDLE        ImageHandle,
	IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
	Cio io;
	unsigned char data;
	io.read(0xCFC,&data);
	
	return EFI_SUCCESS;
}
