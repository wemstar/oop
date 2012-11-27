/*
 * Point.h
 *
 *  Created on: 27-11-2012
 *      Author: wemstar
 */

#ifndef POINT_H_
#define POINT_H_

#include "Value.h"

namespace oop {

/*
 *
 */
class Point: public oop::Value {
public:
	Point(double a=0, double b=0);
	virtual ~Point();
	void wypisz()const;
	Value * clone();
private:
	double _x;
	double _y;
};

} /* namespace oop */
#endif /* POINT_H_ */
