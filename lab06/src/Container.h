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

/*
 *
 */
class Container: public oop::Object {
public:
	Container();
	virtual ~Container();
	virtual int size();
	virtual int empty();
	virtual void insert(Object *);

};

} /* namespace oop */
#endif /* CONTAINER_H_ */
