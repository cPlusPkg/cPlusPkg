
#include "sio.h"

Csio::Csio()
{
	this->setIoAddr();
}

Csio::~Csio()
{
	
}

int Csio::setIoAddr(UINT16 indexPort,UINT16 dataPort)
{
	this->indexPort=indexPort;
	this->dataPort=dataPort;	
	return 0;
}

int Csio::unlock()
{
	return 0;
}
int Csio::lock()
{
	return 0;
}
int Csio::isMe(UINT16 chipid)
{
	if(chipid==0||chipid==0xFFFF) return 0;
	return 1;
}


UINT8 Csio::read(UINT8 ldn,UINT8 reg,UINT8 *data)//*data :out data
{
	if(!this->unlock()) return 0;
	if(reg>=0x30) this->isaWrite(this->indexPort,(UINT8)LDN_REG,this->dataPort,ldn);
	this->isaRead(this->indexPort,reg,this->dataPort,data);
	this->lock();
	return *data;
}


UINT8 Csio::write(UINT8 ldn,UINT8 reg,UINT8 data)// return -1:fail 
{
	if(!this->unlock()) return -1;
	if(reg>=0x30) this->isaWrite(this->indexPort,(UINT8)LDN_REG,this->dataPort,ldn);
	this->isaWrite(this->indexPort,reg,this->dataPort,data);
	this->lock();
	return 0;	
}

UINT16 Csio::chipId()
{
	UINT16 chipid=0;
	UINT8 data;
	this->read(0,CHIP_REG_H,&data);
	chipid=(UINT16)data;
	this->read(0,CHIP_REG_L,&data);	
	chipid=chipid<<8;
	chipid|=data;
	return chipid;
}

//Unlock: Winbond2E/4E(87,87);ITE2E(87,01,55,55)+ITE4E(87,01,55,AA);Fintek2E/4E(87,87);SMSC2E/4E(0x55) ;AST 2E/4E(A5,A5)
//Lock	: Winbond2E/4E(AA);ITE(Index02,bit1->1(2))Fintek2E/4E(AA);SMSC2E/4E(0xAA) ;AST 2E/4E(AA)

int CAstSio::unlock()
{
	Cio::write(this->indexPort,(UINT8)AST_UNLOCK);
	Cio::write(this->indexPort,(UINT8)AST_UNLOCK);
	return 1;
}

int CAstSio::lock()
{
	Cio::write(this->indexPort,(UINT8)AST_LOCK);
	return 1;
}

int CAstSio::isMe(UINT16 chipid)
{
	if(chipid!=0xFFFF) return 1;
	return 0;
}

int CIteSio::unlock()
{
	Cio::write(this->indexPort,(UINT8)0x87);
	Cio::write(this->indexPort,(UINT8)0x01);
	Cio::write(this->indexPort,(UINT8)0x55);
	if(this->indexPort==0x2E) Cio::write(this->indexPort,(UINT8)0x55);//ITE2E(87,01,55,55)
	if(this->indexPort==0x4E) Cio::write(this->indexPort,(UINT8)0xAA);//ITE4E(87,01,55,AA)
	return 1;	

}

int CIteSio::lock()
{
	this->isaWrite(this->indexPort,(UINT8)ITE_LOCK_REG,this->dataPort,(UINT8)ITE_LOCK);
	return 1;
}

int CWinbondSio::unlock()
{
	Cio::write(this->indexPort,(UINT8)WB_UNLOCK);
	Cio::write(this->indexPort,(UINT8)WB_UNLOCK);
	return 1;
}

int CWinbondSio::lock()
{
	Cio::write(this->indexPort,(UINT8)WB_LOCK);
	return 1;
}

int CNctSio::unlock()
{
	Cio::write(this->indexPort,(UINT8)NCT_UNLOCK);
	Cio::write(this->indexPort,(UINT8)NCT_UNLOCK);
	return 1;
}

int CNctSio::lock()
{
	Cio::write(this->indexPort,(UINT8)NCT_LOCK);
	return 1;
}

int CNctSio::isMe(UINT16 chipid)
{
	if(chipid==0||chipid==0xFFFF) return 0;
	if((chipid&0xB350)==0xB350) return 1;
	return 0;
}


int CFintekSio::unlock()
{
	Cio::write(this->indexPort,(UINT8)FTEK_UNLOCK);
	Cio::write(this->indexPort,(UINT8)FTEK_UNLOCK);
	return 1;	
}

int CFintekSio::lock()
{
	Cio::write(this->indexPort,(UINT8)FTEK_LOCK);
	return 1;
}

int CSmscSio::unlock()
{
	Cio::write(this->indexPort,(UINT8)SMSC_UNLOCK);
	return 0;
}

int CSmscSio::lock()
{
	Cio::write(this->indexPort,(UINT8)SMSC_LOCK);	
	return 0;
}
