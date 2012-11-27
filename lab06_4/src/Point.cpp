/*
 * Point.cpp
 *
 *  Created on: 27-11-2012
 *      Author: wemstar
 */

#include "Point.h"

namespace oop {

Point::Point(double a,double b):_x(a),_y(b) {
	// TODO Auto-generated constructor stub

}

Point::~Point() {
	// TODO Auto-generated destructor stub
}
void Point::wypisz()const
{
	cout << "["<< _x << " "<< _y<< "]";
}
Value * Point::clone()
{

}

} /* namespace oop */
