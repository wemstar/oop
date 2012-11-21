/*
 * Object.cpp
 *
 *  Created on: 21-11-2012
 *      Author: wemstar
 */

#include "Object.h"

namespace oop {

Object::Object() {
	// TODO Auto-generated constructor stub

}

Object::~Object() {

}
std::string Object::name()
{
	return typeid(*this).name();
}

} /* namespace oop */
