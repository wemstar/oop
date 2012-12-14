/*
 * Opakowanie.h
 *
 *  Created on: 04-12-2012
 *      Author: wemstar
 */

#ifndef OPAKOWANIE_H_
#define OPAKOWANIE_H_
#include <string>
#include "Object.h"
namespace oop{
template <typename T>
class Opakowanie: public Object
{
public:
	Opakowanie(T a):_x(a){}
	void print(){};
private:
	T _x;

};
typedef Opakowanie<double> Dobule;
typedef Opakowanie<std::string> String;
}


#endif /* OPAKOWANIE_H_ */
