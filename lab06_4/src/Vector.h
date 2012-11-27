/*
 * Vector.h
 *
 *  Created on: 27-11-2012
 *      Author: wemstar
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include "Value.h"

namespace oop {

/*
 *
 */
class Vector: public oop::Value {
public:
	friend ostream & operator <<(ostream &,const Value &);
	Vector();
	Vector(Value *);
	virtual ~Vector();
	void push_back(Value *);
	void wypisz()const;
	Value * clone();
private:
	void resize();
	int _size;
	int _poj;
	Value **_tab;


};

} /* namespace oop */
#endif /* VECTOR_H_ */
