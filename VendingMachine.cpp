#include "VendingMachine.h"
#include "SnackSlot.h"

VendingMachine::VendingMachine(short slotCount)
{
	_slotCount = slotCount;
	array = new SnackSlot* [slotCount];
	_machinePosition = 0;
}

void VendingMachine::addSlot(SnackSlot* stacks)
{
	array[_machinePosition] = stacks;
	++_machinePosition;
}

short VendingMachine::getEmptySlotsCount()
{  
	short _count = 0;
	

	for (short i = 0; i < _machinePosition; ++i) {
		if (array[i]->getSlotPosition() == 0) {

			++_count;
		}


	} 

	_count += _slotCount-_machinePosition;
	
	
	
	return _count;


}
