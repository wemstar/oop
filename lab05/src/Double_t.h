/*
 * Double_t.h
 *
 *  Created on: 07-11-2012
 *      Author: wemstar
 */

#ifndef DOUBLE_T_H_
#define DOUBLE_T_H_

/*
 *
 */


class Double_t {
public:
	Double_t(double);
	operator double();
	double get();
private:
	double zmienna;
};
typedef Double_t value_type;
#include "CountedPtr.h"
#endif /* DOUBLE_T_H_ */
