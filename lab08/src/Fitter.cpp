/*
 * Fitter.cpp
 *
 *  Created on: 10-12-2012
 *      Author: wemstar
 */

#include "Fitter.h"

namespace oop {


void Fitter::set_fit_type(Fit *a)
{
	_fit_type=a;

}
void Fitter::set_data(DataReader *a)
{
	_punkty=a;
}
void Fitter::fit()
{
	_fit_type->dopasuj(_punkty);

}
Fit & Fitter::get_result()
{
	return *_fit_type;
}
} /* namespace oop */
