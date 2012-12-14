/*
 * VectorError.h
 *
 *  Created on: 04-12-2012
 *      Author: wemstar
 */

#ifndef VECTORERROR_H_
#define VECTORERROR_H_
#include <exception>
#include <iostream>
namespace oop{
class VectorError:public std::exception
{
	const char * what(){return " Blad wektora";}
};
class BadIndex:public VectorError
{
	const char * what(){return "Nie ma takiego indeksu";}
};
struct exception_handler
{
	static void process(std::exception &e)
	{
		std::cout << e.what();
	}
};
}

#endif /* VECTORERROR_H_ */
