/*
 * Int_t.cpp
 *
 *  Created on: 07-11-2012
 *      Author: wemstar
 */

#include "Int_t.h"

Int_t::Int_t(const int a) :n(a) {



}

Int_t::operator int()
{
	return n;
}
int Int_t::get()
{
	return n;
}
