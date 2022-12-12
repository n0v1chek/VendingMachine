#pragma once
#include "Snack.h"
class SnackSlot
{
public:
	SnackSlot(short slotSize);
	void addSnack(Snack* snack);
	short getSlotPosition()const;
	
private:
	Snack** arr;
	short _slotSize;
	short _slotPosition;
	 
};


