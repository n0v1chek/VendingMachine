#include "Snack.h"

Snack::Snack(const std::string& name)
{
	_name = name;
}

std::string Snack::getName() const
{
	return _name;
}
