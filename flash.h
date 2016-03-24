#ifndef D_FLASH_H
#define D_FLASH_H

#include "spi.h"

class Cflash:public Cspi
{
public:
	Cflash();
	~Cflash();
};

#endif //D_FLASH_H
