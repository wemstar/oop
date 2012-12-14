/*
 * Point.h
 *
 *  Created on: 04-12-2012
 *      Author: wemstar
 */

#ifndef POINT_H_
#define POINT_H_
#include "Opakowanie.h"
namespace oop {

/*
 *
 */
class Point:public Opakowanie<double> {
public:
	Point(double a,double b):Opakowanie(a),_y(b){};
	void print(){};
private:
	double _y;

};

} /* namespace oop */
#endif /* POINT_H_ */
