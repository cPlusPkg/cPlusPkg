#ifndef D_IO_H
#define D_IO_H

extern "C" {
#include <Library/IoLib.h>
};

#include "object.h"

class Cio:public Cobject
{
public:
	Cio();
	~Cio();
	UINT8  read(UINT16 port,UINT8  * out);//byte 
	UINT16 read(UINT16 port,UINT16 * out);//word
	UINT32 read(UINT16 port,UINT32 * out);//dword
	
	UINT8  write(UINT16 port,UINT8  data);
	UINT16 write(UINT16 port,UINT16 data);
	UINT32 write(UINT16 port,UINT32 data);
	
	UINT8   or  (UINT16 port,UINT8  orData);
	UINT16  or  (UINT16 port,UINT16 orData);
	UINT32  or  (UINT16 port,UINT32 orData);
	
	UINT8   and (UINT16 port,UINT8  andData);
	UINT16  and (UINT16 port,UINT16 andData);
	UINT32  and (UINT16 port,UINT32 andData);
	
	//indexPort=index ,dataPort=data
	UINT8  isaRead(UINT16 indexPort,UINT8  index,UINT16 dataPort,UINT8 *data);//ISA byte read
	UINT8  isaRead(UINT16 indexPort,UINT16 index,UINT16 dataPort,UINT8 *data);//ISA word index read
	UINT8  isaWrite(UINT16 indexPort,UINT8 index,UINT16 dataPort,UINT8 data);//ISA byte write
	UINT8  isaWrite(UINT16 indexPort,UINT16 index,UINT16 dataPort,UINT8 data);//ISA word index write
};

#endif//D_IO_H
