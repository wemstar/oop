/*
 * String.h
 *
 *  Created on: 27-11-2012
 *      Author: wemstar
 */

#ifndef STRING_H_
#define STRING_H_

#include "Value.h"

namespace oop {

/*
 *
 */
class String: public oop::Value {
public:
	String(string a="");
	virtual ~String();
	void wypisz()const;
	Value * clone();
private:
	string _Str_ing;
};

} /* namespace oop */
#endif /* STRING_H_ */
