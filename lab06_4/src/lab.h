/*
 * lab.h
 *
 *  Created on: 27-11-2012
 *      Author: wemstar
 */

#ifndef LAB_H_
#define LAB_H_
#include "Vector.h"
#include "Point.h"
#include "Double.h"
#include "String.h"
namespace oop{
 ostream & operator <<(ostream & Out,const Vector & Val)
{
	 Val.wypisz();
	 Out << "przeładowany operator";
	 return Out;
}
}

#endif /* LAB_H_ */
