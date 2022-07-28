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

	unsigned char c();
	unsigned char z();
	unsigned char i();
	unsigned char d();
	unsigned char b();
	unsigned char v();
	unsigned char n();

	P_register& operator =( unsigned char _i);

private:
	unsigned _c; //Carry
	unsigned _z; //Zero
	unsigned _i; //IRQ Disable
	unsigned _d; //Decimal mode
	unsigned _b; //Break instruction
	unsigned _v; //Overflow
	unsigned _n; //Negative
};

std::ostream& operator <<(std::ostream &o, P_register &p);
