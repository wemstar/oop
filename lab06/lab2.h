/*
 * lab2.h
 *
 *  Created on: 14-11-2012
 *      Author: wemstar
 */

#ifndef LAB2_H_
#define LAB2_H_
#include <iostream>
#include "CountedPtr.h"
#include "array.h"
namespace OOP
{
using namespace std;
void print_tab_el(const array &tab2)
{
	for(int i=0;i<tab2.ilosc;++i)
	{
		cout << *(tab2.tab[i]);
	}
	cout << "koniec"<< endl;
}
ostream & operator << (ostream& stream,BaseClass& base)
{
	return stream << base.napis<<endl;
}
}


#endif /* LAB2_H_ */
