#include "SnackSlot.h"

SnackSlot::SnackSlot(short slotSize)
{
	_slotSize = slotSize;
	arr = new Snack* [slotSize];
	_slotPosition = 0;

}

void SnackSlot::addSnack(Snack* snack)
{
	arr[_slotPosition] = snack;
	++_slotPosition;
}

short SnackSlot::getSlotPosition() const
{
	return _slotPosition;
}
 
