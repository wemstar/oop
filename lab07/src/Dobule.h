/*
 * Dobule.h
 *
 *  Created on: 29-11-2012
 *      Author: wemstar
 */

#ifndef DOBULE_H_
#define DOBULE_H_
#include "Object.h"
namespace oop {

/*
 *
 */
class Dobule: public Object {
public:
	Dobule(double a=0);
	virtual ~Dobule();
	void print(){std::cout << _x<< std::endl;}
private:
	double _x;
};

} /* namespace oop */
#endif /* DOBULE_H_ */
