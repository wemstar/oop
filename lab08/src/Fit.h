/*
 * Fit.h
 *
 *  Created on: 10-12-2012
 *      Author: wemstar
 */

#ifndef FIT_H_
#define FIT_H_
#include <iostream>
#include <exception>
#include "DataReader.h"
namespace oop {

/*
 *
 */
class Fit {
public:
	Fit();
	virtual ~Fit();
	virtual void dopasuj(DataReader *a)=0;
	virtual void print(std::ostream &stre)=0;
	struct ExceptionHandler
	{
		static void print(std::exception &e);
	};
};

} /* namespace oop */
#endif /* FIT_H_ */
