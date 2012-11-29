/*
 * SquenceContainer.h
 *
 *  Created on: 21-11-2012
 *      Author: wemstar
 */

#ifndef SQUENCECONTAINER_H_
#define SQUENCECONTAINER_H_

#include "Container.h"

namespace oop {

/*!
 * SquenceContainer dziedziczy po Container ponieważ jest to pojemnik w którym dane mają swoja kolejność
 */
class SquenceContainer: public oop::Container {
public:
	SquenceContainer();
	virtual ~SquenceContainer();
	virtual void push_back(Object *)=0;
	virtual void push_front(Object *)=0;
protected:
	Object **_tab;
};

} /* namespace oop */
#endif /* SQUENCECONTAINER_H_ */
