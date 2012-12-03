/*
 * Vector.cpp
 *
 *  Created on: 21-11-2012
 *      Author: wemstar
 */

#include "Vector.h"
#include "BadIndexError.h"
namespace oop {

Vector::Vector(int a) {
	_size=0;
	_cap=a;
	_tab=NULL;
	resize();


}

Vector::~Vector() {
	for(int i=0;i<_size;++i)delete _tab[i];
	delete [] _tab;
}
void Vector::resize(int delta)
{
	if(_tab==NULL)_tab=new Object*[_cap];
	else{
		_cap*=2;
		Object **tmp=new Object*[_cap];

		for(int i=0;i<_size;++i)tmp[i+delta]=_tab[i];
		delete []_tab;
		_tab=tmp;
	}

}
void Vector::push_back(Object * obj)
{

	if(_size==_cap)resize();
	_tab[_size]=obj;
	++_size;



}
void Vector::push_front(Object * obj)
{
	resize(1);
	_tab[0]=obj;
	++_size;

}
Object * Vector::operator[](int n)
{
	if (n>_size) throw(BadIndexError());
	return _tab[n];

}
} /* namespace oop */
