/*
 * Vector.cpp
 *
 *  Created on: 27-11-2012
 *      Author: wemstar
 */

#include "Vector.h"

namespace oop {

Vector::Vector():_size(0),_poj(1) {

	_tab=NULL;
	resize();

}
Vector::Vector(Value *a):_size(0),_poj(1) {
	_tab=NULL;
	resize();
	push_back(a);

}

Vector::~Vector() {

	for(int i=0;i<_size;++i){delete _tab[i];
	}

	delete [] _tab;
}
void Vector::wypisz()const
{
	cout << "[";
	for(int i=0;i<_size;++i)
	{
		_tab[i]->wypisz();
		cout.flush();
	}
	cout << "]";

}
Value * Vector::clone()
{
	Vector* tmp=new Vector;
	while(tmp->_poj<=_poj)tmp->resize();
	for(int i=0;i<_size;++i)
	{
		tmp->push_back(_tab[i]->clone());
	}
	return tmp;

}
void Vector::push_back(Value * arg)
{
	if(_size==_poj)resize();
		_tab[_size]=arg;
		++_size;
}
void Vector::resize()
{
	if(_tab==NULL)_tab=new Value*[_poj];
	else{
		_poj*=2;
		Value **tmp=new Value*[_poj];

		for(int i=0;i<_size;++i)tmp[i]=_tab[i];
		delete []_tab;
		_tab=tmp;
	}

}
} /* namespace oop */
