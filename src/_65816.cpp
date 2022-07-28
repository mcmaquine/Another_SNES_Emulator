/*
 * _65816.cpp
 *
 *  Created on: 27 de jul de 2022
 *      Author: maquine
 */
#include <iostream>
#include "_65816.h"

P_register::P_register() : _c(0), _z(0), _i(0), _d(0), _b(0), _v(0), _n(0){}

P_register& P_register::operator =(unsigned char _i)
{
	_c = 0x01 & _i;
	_z = 0x02 & _i;
	_i = 0x04 & _i;
	_d = 0x08 & _i;
	_b = 0x10 & _i;
	_v = 0x40 & _i;
	_n = 0x80 & _i;

	return *this;
}

unsigned char P_register::c()
{
	return _c;
}

unsigned char P_register::z()
{
	return _z;
}

unsigned char P_register::i()
{
	return _i
}
	unsigned char P_register::d()
	unsigned char P_register::b()
	unsigned char P_register::v()
	unsigned char P_register::n()

int P_register::value()
{
	return (_c + (_z<<1) + (_i<<2) + (_d<<3) + (_b<<4) + (_v<<6) + (_n<<7) );
}

std::ostream& operator <<(std::ostream &o, P_register &p)
{
    o << p.value() << std::endl;
    o << "c: " << p.c() << std::endl;
    o << "z: " << p.z() << std::endl;
    o << "i: " << p.i() << std::endl;
    o << "d: " << p.d() << std::endl;
    o << "b: " << p.b() << std::endl;
    o << "v: " << p.v() << std::endl;
    o << "n: " << p.n() << std::endl;
    return o;
}
