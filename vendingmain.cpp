#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"
#include<iostream>

int main() {
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10);
	SnackSlot* slot2 = new SnackSlot(5);
	short slotCount = 20;
	slot->addSnack(bounty); 
	slot->addSnack(snickers);
	slot2->addSnack(bounty);
	VendingMachine* machine = new VendingMachine(slotCount);
	machine->addSlot(slot); 
	machine->addSlot(slot2);
	std::cout << machine->getEmptySlotsCount(); 
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
}