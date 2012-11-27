/*
 * Value.h
 *
 *  Created on: 27-11-2012
 *      Author: wemstar
 */

#ifndef VALUE_H_
#define VALUE_H_
#include <memory>
#include <iostream>
#include <string>
namespace oop {
using namespace std;
/*
 *
 */
class Value {
public:
	Value();
	virtual ~Value();
	virtual Value * clone()=0;
	virtual void wypisz()const =0;
};

} /* namespace oop */
#endif /* VALUE_H_ */
