/*
 * Object.h
 *
 *  Created on: 21-11-2012
 *      Author: wemstar
 */

#ifndef OBJECT_H_
#define OBJECT_H_
#include <string>
#include <typeinfo>
#include <iostream>
namespace oop {

/*!
 *
 * Główny obiekt przodek
 */
class Object {
public:
	Object();
	virtual ~Object();
	virtual std::string name();

};

} /* namespace oop */
#endif /* OBJECT_H_ */
