/*
 * Double.h
 *
 *  Created on: 27-11-2012
 *      Author: wemstar
 */

#ifndef DOUBLE_H_
#define DOUBLE_H_

#include "Value.h"

namespace oop {

/*
 *
 */
class Double: public oop::Value {
public:
	Double(double a=0);
	virtual ~Double();
	void wypisz()const;
	Value * clone();
private:
	double wart;
};

} /* namespace oop */
#endif /* DOUBLE_H_ */
