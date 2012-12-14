/*
 * lab.h
 *
 *  Created on: 13-12-2012
 *      Author: wemstar
 */

#ifndef LAB_H_
#define LAB_H_
#define CATCH_ALL_STANDARD_EXCEPTIONS catch(std::exception &e)
#include "Opakowanie.h"
#include "list.h"
struct exception_handler
{
	static void process(std::exception &e){}
};


#endif /* LAB_H_ */
