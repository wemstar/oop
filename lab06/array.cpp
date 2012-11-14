/*
 * array.cpp
 *
 *  Created on: 14-11-2012
 *      Author: wemstar
 */
#include "CountedPtr.h"
#include "array.h"

namespace OOP {

array::array():tab(0),ilosc(0) {


}
/*array::array( BaseClass * element) {
	ilosc=0;
	tab=new CountedPtr(element);

}*/
void array::push_back( BaseClass* element)
	{
	rozszerz();
	tab[ilosc-1]=element;


	}
void array::rozszerz()
{
	CountedPtr *tmp=new CountedPtr[ilosc+1];
	for (int i=0;i<ilosc;++i)
	{
		tmp[i]=tab[i];
	}
	delete[] tab;
	tab=tmp;
	++ilosc;
}
} /* namespace OOP */
