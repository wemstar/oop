/*
 * Opakowanie.h
 *
 *  Created on: 03-12-2012
 *      Author: wemstar
 */

#ifndef OPAKOWANIE_H_
#define OPAKOWANIE_H_

#include "Object.h"

namespace oop {

/*
 *
 */
template <typename T> class Opakowanie: public oop::Object {
public:
	Opakowanie(T a=0);
	void print()
	{
		std::cout << _x << "\n";
	}

private:
	T _x;
};
template <typename T>
Opakowanie< T >::Opakowanie(T a):_x(a) {


}
typedef Opakowanie<int> Int;
typedef Opakowanie<double> Dobule;
} /* namespace oop */
#endif /* OPAKOWANIE_H_ */
