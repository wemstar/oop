/*
 * lab.h
 *
 *  Created on: 10-12-2012
 *      Author: wemstar
 */

#ifndef LAB_H_
#define LAB_H_
#include "DataReader.h"
#include "Fitter.h"
#include "FitExceptions.h"
#include "LinearFit.h"
#include "SlopeFit.h"

#define CATCH_ALL_FIT_EXCEPTIONS catch(FitExceptions &e)
#define CATCH_ALL_STD_EXCEPTIONS catch(std::exception &e)
#define CATCH_REST catch(...)
namespace oop{


struct Array
{
	static int size;
};
int Array::size=100;
}

#endif /* LAB_H_ */
