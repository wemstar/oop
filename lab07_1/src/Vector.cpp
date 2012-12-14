/*
 * Vector.cpp
 *
 *  Created on: 04-12-2012
 *      Author: wemstar
 */

#include "Vector.h"

namespace oop {

Vector::Vector(int poj) {
	_poj=poj;
	_size=0;
	_tab=0;
	powieksz();


}

Vector::~Vector() {
	for(int i=0;i<_size;++i)delete _tab[i];
	delete [] _tab;
}
void Vector::powieksz(int lambda)
{
	if(_tab==0){_tab=new Object*[_poj];}
	else
	{
		for(int i=0;i<_size;++i)
			{
				if(i==0);
			}
	}

}
void Vector::push_front(Object *a){
	if(_size==_poj)powieksz(1);
	_tab[0]=a;
	++_size;
}
void Vector::push_back(Object *a){
	if(_size==_poj)powieksz();
		_tab[_size]=a;
		++_size;
}
void Vector::insert(int pozycja,Object *a){
	if(_size==_poj)powieksz(pozycja);
			_tab[_size]=a;
			++_size;
}
Object * Vector::operator [](int n){}
std::ostream &operator<<(std::ostream& ost,Vector a){}
} /* namespace oop */
