/*
 * Vector.h
 *
 *  Created on: 04-12-2012
 *      Author: wemstar
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include "Object.h"
#include <iostream>
namespace oop {

/*
 *
 */
class Vector: public oop::Object {
public:
	friend std::ostream &operator<<(std::ostream& ost,Vector a);
	Vector(int poj=2);
	virtual ~Vector();
	void powieksz(int lambda =0);
	void push_front(Object *a);
	void push_back(Object *a);
	void insert(int pozycja,Object *a);
	Object * operator [](int n);
private:
	int _poj;
	int _size;
	Object ** _tab;

};

} /* namespace oop */
#endif /* VECTOR_H_ */
