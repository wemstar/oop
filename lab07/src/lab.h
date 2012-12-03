/*
 * lab.h
 *
 *  Created on: 29-11-2012
 *      Author: wemstar
 */

#ifndef LAB_H_
#define LAB_H_
#include "Vector.h"
#include "Opakowanie.h"
#include "BadIndexError.h"
#include "VectorStandardError.h"
class random
{
public:
	static int  get(int a,int b=0)
	{
		return rand()%(a-b)+a;
	}
};
class exception_handler
{
public:
	static void process(std::exception &e){
	std::cout << e.what();

	}
};
#define CATCH_ALL_STANDARD_EXCEPTIONS catch(VectorStandardError &e)
#define CATCH_EXCEPTION_BAD_INDEX catch(BadIndexError &e)
#define CATCH_ALL_EXCEPTIONS catch(...)
#endif /* LAB_H_ */
