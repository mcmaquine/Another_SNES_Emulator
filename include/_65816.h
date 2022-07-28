#pragma once
#include <iostream>

class _65816
{
public:
	_65816();
private:
};

class P_register
{
public:
	P_register();

	int value();

	P_register& operator =( int _i);

private:
	unsigned c; //Carry
	unsigned z; //Zero
	unsigned i; //IRQ Disable
	unsigned d; //Decimal mode
	unsigned b; //Break instruction
	unsigned v; //Overflow
	unsigned n; //Negative
};

std::ostream& operator <<(std::ostream &o, P_register const &p);
