/*
 * Int.h
 *
 *  Created on: 29-11-2012
 *      Author: wemstar
 */

#ifndef INT_H_
#define INT_H_

#include "Object.h"

namespace oop {

/*
 *
 */
class Int: public oop::Object {
public:
	Int(int a=0);
	virtual ~Int();
	void print(){std::cout << _x<< std::endl;}
private:
	int _x;
};

} /* namespace oop */
#endif /* INT_H_ */
