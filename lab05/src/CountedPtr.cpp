/*
 * CountedPtr.cpp
 *
 *  Created on: 07-11-2012
 *      Author: wemstar
 */

#include "CountedPtr.h"




 CountedPtr::CountedPtr(::value_type *a) :wskaznik(a) {

	licznik++;
}

CountedPtr::~CountedPtr() {
	destruktor();
}

::value_type &CountedPtr::operator*() const
{
	return * wskaznik;
}
::value_type * CountedPtr::operator->() const
{
	return wskaznik;
}
CountedPtr & CountedPtr::operator =( CountedPtr  &a)
{
	if(this!=&a )
	{

	destruktor();
	delete this->wskaznik;
	this->wskaznik=a.wskaznik;
	licznik=a.licznik;
	++licznik;
	}
	return *this;
}
CountedPtr & CountedPtr::operator =( ::value_type  *a)
{
	destruktor();
	wskaznik=a;

	return *this;
}
CountedPtr::CountedPtr( const CountedPtr &sp)  {
        licznik = sp.licznik;
        wskaznik = sp.wskaznik;
        ++licznik;
}
void CountedPtr::destruktor()
{
			--licznik;
		if(!licznik)
		{
			delete wskaznik;
		}

}


