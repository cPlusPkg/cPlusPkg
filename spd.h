#ifndef D_SPD_H
#define D_SPD_H

#include "smbus.h"

class Cspd:public Csmbus
{
public:
	Cspd();
	~Cspd();
};

#endif //D_SPD_H
