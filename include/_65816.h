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

	unsigned c();
	unsigned z();
	unsigned i();
	unsigned d();
	unsigned b();
	unsigned v();
	unsigned n();

	P_register& operator =( int i);

private:
	unsigned int _c; //Carry
	unsigned int _z; //Zero
	unsigned int _i; //IRQ Disable
	unsigned int _d; //Decimal mode
	unsigned int _b; //Break instruction
	unsigned int _v; //Overflow
	unsigned int _n; //Negative
};

std::ostream& operator <<(std::ostream &o, P_register &p);
