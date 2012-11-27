/*
 * String.cpp
 *
 *  Created on: 27-11-2012
 *      Author: wemstar
 */

#include "String.h"

namespace oop {

String::String(string a):_Str_ing(a) {
	// TODO Auto-generated constructor stub

}

String::~String() {

}
void String::wypisz() const
{
	cout << _Str_ing <<" ";
}
Value * String::clone()
{
	String *tmp= new String(_Str_ing);
	return tmp;
}

} /* namespace oop */
