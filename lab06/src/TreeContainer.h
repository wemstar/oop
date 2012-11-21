/*
 * TreeContainer.h
 *
 *  Created on: 21-11-2012
 *      Author: wemstar
 */

#ifndef TREECONTAINER_H_
#define TREECONTAINER_H_

#include "Container.h"

namespace oop {

/*!
 *  Klasa dziedziczy po Container ponieważ dane są ustawione jak drzewo
 */
class TreeContainer: public oop::Container {
public:
	TreeContainer();
	virtual ~TreeContainer();
};

} /* namespace oop */
#endif /* TREECONTAINER_H_ */
