/*
 * LinearFit.h
 *
 *  Created on: 10-12-2012
 *      Author: wemstar
 */

#ifndef LINEARFIT_H_
#define LINEARFIT_H_

#include "Fit.h"

namespace oop {

/*
 *
 */
class LinearFit: public oop::Fit {
public:

	void dopasuj(DataReader * dat);
	void print(std::ostream &o);

private:
	double _a;
	double _b;
};

} /* namespace oop */
#endif /* LINEARFIT_H_ */
