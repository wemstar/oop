/*
 * SlopeFit.h
 *
 *  Created on: 10-12-2012
 *      Author: wemstar
 */

#ifndef SLOPEFIT_H_
#define SLOPEFIT_H_

#include "Fit.h"

namespace oop {

/*
 *
 */
class SlopeFit: public oop::Fit {
public:

	void dopasuj(DataReader * dat);
	virtual void print(std::ostream &stre);

private:
	double _a;
};

} /* namespace oop */
#endif /* SLOPEFIT_H_ */
