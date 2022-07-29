/*
 * _65816.cpp
 *
 *  Created on: 27 de jul de 2022
 *      Author: maquine
 */
#include <iostream>
#include "_65816.h"

P_register::P_register() : _c(0), _v(0), _z(0), _i(0), _d(0), _b(0), _n(0){}

P_register& P_register::operator =(int i)
{
	_c = ( 0x01 & i ) >> 0; //doesn't shift
	_z = ( 0x02 & i ) >> 1;
	_i = ( 0x04 & i ) >> 2;
	_d = ( 0x08 & i ) >> 3;
	_b = ( 0x10 & i ) >> 4;
	_v = ( 0x40 & i ) >> 6;
	_n = ( 0x80 & i ) >> 7;

	return *this;
}

int P_register::c()
{
	return _c;
}

int P_register::z()
{
	return _z;
}

int P_register::i()
{
	return _i;
}

int P_register::d()
{
	return _d;
}

int P_register::b()
{
	return _b;
}

int P_register::v()
{
	return _v;
}

int P_register::n()
{
	return _n;
}

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
