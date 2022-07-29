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

	int c();
	int z();
	int i();
	int d();
	int b();
	int v();
	int n();

	P_register& operator =( int i);

private:
	int _c; //Carry
	int _z; //Zero
	int _i; //IRQ Disable
	int _d; //Decimal mode
	int _b; //Break instruction
	int _v; //Overflow
	int _n; //Negative
};

std::ostream& operator <<(std::ostream &o, P_register &p);
