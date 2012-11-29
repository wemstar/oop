/*
 * Container.h
 *
 *  Created on: 21-11-2012
 *      Author: wemstar
 */

#ifndef CONTAINER_H_
#define CONTAINER_H_

#include "Object.h"

namespace oop {

/*!
 * klasa container dziedziczy po głównym przodku ponieważ każdy kontener jest rozserzonym obiektem
 */
class Container: public oop::Object {
public:
	Container();
	virtual ~Container();
	virtual int size();
	virtual int empty();
	virtual void push_back(Object *)=0;
protected:
	int _size;
	int _cap;
};

} /* namespace oop */
#endif /* CONTAINER_H_ */
