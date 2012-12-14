/*
 * Fitter.h
 *
 *  Created on: 10-12-2012
 *      Author: wemstar
 */

#ifndef FITTER_H_
#define FITTER_H_
#include "LinearFit.h"
#include "SlopeFit.h"
#include "DataReader.h"
namespace oop {

/*
 *
 */
class Fitter {
public:

	void set_fit_type(Fit *a);
	void set_data(DataReader *a);
	void fit();
	Fit & get_result();

private:
	Fit *_fit_type;
	DataReader * _punkty;

};


} /* namespace oop */
#endif /* FITTER_H_ */
