#ifndef D_SIO_H
#define D_SIO_H

#include "io.h"
#include "memory.h"

//Unlock: Winbond2E/4E(87,87);ITE2E(87,01,55,55)+ITE4E(87,01,55,AA);Fintek2E/4E(87,87);SMSC2E/4E(0x55);AST 2E/4E(A5,A5)
//Lock	: Winbond2E/4E(AA);ITE(Index02,bit1->1(2))Fintek2E/4E(AA);SMSC2E/4E(0xAA) ;AST 2E/4E(AA)
//Winbond
#define WB_UNLOCK	0x87
#define WB_LOCK		0xAA
//NCT
#define NCT_UNLOCK 0x87
#define NCT_LOCK 0xAA
//ITE
#define ITE_LOCK		0x02
#define ITE_LOCK_REG	0x02
//Fintek
#define FTEK_UNLOCK		0x87
#define FTEK_LOCK		0xAA
#define FTEK_VIDREG_H	0x23
#define FTEK_VIDREG_L	0x24
#define FTEK_VID		0x1934
//SMSC
#define SMSC_UNLOCK		0x55
#define SMSC_LOCK		0xAA

//AST SIO
#define AST_UNLOCK	0xA5
#define AST_LOCK	0xAA


//SIO_REG
#define LDN_REG		0x07
#define CHIP_REG_H	0x20
#define CHIP_REG_L	0x21

class Csio:public Cio ,public Cmemory
{
public:
	UINT16 indexPort;//index port
	UINT16 dataPort;//data port
public:
	Csio();
	~Csio();
	virtual int unlock();//note:unlock should return not 0 
	virtual int lock();
	virtual	int isMe(UINT16 chipid);//should return not 0 
	virtual int setIoAddr(UINT16 indexPort=0x2E,UINT16 dataPort=0x2F);//default 2e,2f
	UINT8  read(UINT8 ldn,UINT8 reg,UINT8 *data);//*data :out data
	UINT8  write(UINT8 ldn,UINT8 reg,UINT8 data);//return -1:fail 
	UINT16 chipId();
};

class CAstSio :public Csio
{
public:
	int unlock();
	int lock();
	int isMe(UINT16 chipid);
};

class CIteSio :public Csio
{
public:
	int unlock();
	int lock();
};

class CWinbondSio :public Csio
{
public:
	int unlock();
	int lock();
};

class CNctSio :public Csio
{
public:
	int unlock();
	int lock();
	int isMe(UINT16 chipid);
};


class CFintekSio :public Csio
{
public:
	int unlock();
	int lock();
};


class CSmscSio :public Csio
{
public:
	int unlock();
	int lock();
};

#endif //D_SIO_H
