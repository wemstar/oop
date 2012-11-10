/*
 * Double_t.cpp
 *
 *  Created on: 07-11-2012
 *      Author: wemstar
 */

#include "Double_t.h"

Double_t::Double_t(const double a):zmienna(a) {


}

Double_t::operator double() {
	return zmienna;
}
double Double_t::get()
{
	return zmienna;
}
