/*
 * Vector.h
 *
 *  Created on: 21-11-2012
 *      Author: wemstar
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include "SquenceContainer.h"

namespace oop {

/*
 *
 */
class Vector: public oop::SquenceContainer {
public:
	Vector(int a=1);
	virtual ~Vector();
	void resize(int delta=0);
	virtual void push_back(Object *);
	virtual void push_front(Object *);
	Object * operator[](int n);
};

} /* namespace oop */
#endif /* VECTOR_H_ */
