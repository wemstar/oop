/*
 * array.h
 *
 *  Created on: 14-11-2012
 *      Author: wemstar
 */

#ifndef ARRAY_H_
#define ARRAY_H_
#include "CountedPtr.h"
namespace OOP {

/*
 *
 */
class BaseClass;
class CountedPtr;
class array {
public:
	friend void print_tab_el(const array &tab2);
	array();
	//array( BaseClass * base);
	void push_back(BaseClass* element);



private:
	CountedPtr *tab;
	int ilosc;
	void rozszerz();
};

} /* namespace OOP */
#endif /* ARRAY_H_ */
