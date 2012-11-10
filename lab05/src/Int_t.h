/*
 * Int_t.h
 *
 *  Created on: 07-11-2012
 *      Author: wemstar
 */

#ifndef INT_T_H_
#define INT_T_H_

/*
 *
 */


class Int_t {
public:
	Int_t(int);
	operator int();
	int get();
private:
	const int n;
};

#include "CountedPtr.h"

#endif /* INT_T_H_ */
