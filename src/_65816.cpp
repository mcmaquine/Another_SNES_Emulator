/*
 * _65816.cpp
 *
 *  Created on: 27 de jul de 2022
 *      Author: maquine
 */
#include <iostream>
#include "_65816.h"

P_register& P_register::operator =(int _i)
{
	c = 0x01 & _i;
	z = 0x02 & _i;
	i = 0x04 & _i;
	d = 0x08 & _i;
	b = 0x10 & _i;
	v = 0x40 & _i;
	n = 0x80 & _i;

	return *this;
}

int P_register::value()
{
	return (c + (z<<1) + (i<<2) + (d<<3) + (b<<4) + (v<<6) + n<<7 );
}

std::ostream& operator <<(std::ostream &o, P_register &p)
{
    o << p.value();
    return o;
}
