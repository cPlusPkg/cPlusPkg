#ifndef D_SPI_H
#define D_SPI_H

#include "pci.h"
#include "memory.h"

class Cspi:public Cmemory
{
public:
	Cspi();
	~Cspi();
};

#endif //D_SPI_H
