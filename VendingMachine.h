#pragma once
#include "SnackSlot.h"

class VendingMachine
{
public:
	VendingMachine(short slotCount);
	void addSlot(SnackSlot* stacks);
	short getEmptySlotsCount();
	

private:
	SnackSlot** array;
	short _slotCount;
	short _machinePosition;
};

