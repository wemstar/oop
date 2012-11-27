/*
 * Double.cpp
 *
 *  Created on: 27-11-2012
 *      Author: wemstar
 */

#include "Double.h"

namespace oop {

Double::Double(double a):wart(a) {


}

Double::~Double() {

}
void Double::wypisz()const
{
	cout << wart << " ";
}
Value * Double::clone()
{

}
} /* namespace oop */
