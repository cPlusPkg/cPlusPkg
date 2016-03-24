
#include "CplusPei.h"

extern "C" EFI_STATUS EFIAPI CplusPeiInit (
    IN       EFI_PEI_FILE_HANDLE   FileHandle,
    IN CONST EFI_PEI_SERVICES     **PeiServices )
{
	//Cio io;
	//unsigned char data;
	//io.read(0xCFC,&data);
/*
	CAstSio sio;
	sio.write(2,0x60,3);
	sio.write(2,0x61,0xF8);
	sio.write(2,0x30,1);
	
	Cpci pci;
	pci.and(PCI_LIB_ADDRESS(1,16,7,0xF8),(UINT8)0xFC);
	pci.or(PCI_LIB_ADDRESS(0,31,0,0x82),(UINT8)1);
	pci.write(PCI_LIB_ADDRESS(0,31,0,0x80),(UINT8)0x10);
	*/
	return EFI_SUCCESS;
}
