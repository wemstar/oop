/*
 * Vector.cpp
 *
 *  Created on: 21-11-2012
 *      Author: wemstar
 */

#include "Vector.h"

namespace oop {

Vector::Vector(int a) {
	_size=0;
	_cap=0;

}

Vector::~Vector() {
	// TODO Auto-generated destructor stub
}
void Vector::resize()
{
	if(_tab==NULL)_tab=new Object*[_cap];
	else{
		_cap*=2;
		Object **tmp=new Object*[_cap];

		for(int i=0;i<_size;++i)tmp[i]=_tab[i];
		delete []_tab;
		_tab=tmp;
	}

}
void Vector::push_back(Object *)
{

}
void Vector::push_front(Object *)
{

}
Object * Vector::operator[](int n)
{

}
} /* namespace oop */
