/*
 * lab.h
 *
 *  Created on: 04-12-2012
 *      Author: wemstar
 */

#ifndef LAB_H_
#define LAB_H_
#include "Point.h"
#include "Vector.h"
#include "VectorError.h"
#define CATCH_EXCEPTION_BAD_INDEX catch(BadIndex e)
#define CATCH_ALL_STANDARD_EXCEPTIONS catch(VectorError e)
#define  CATCH_ALL_EXCEPTIONS catch(...)
struct random
{

	static int get(int a,int b=0)
	{
		if(b==0)return rand()%(b-a)+a;
		else return rand()%(a);
	}
};

#endif /* LAB_H_ */
