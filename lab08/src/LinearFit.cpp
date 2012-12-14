/*
 * LinearFit.cpp
 *
 *  Created on: 10-12-2012
 *      Author: wemstar
 */

#include "LinearFit.h"

namespace oop {


void LinearFit::print(std::ostream &o)
{
	o<<"wspolczynnik a to "<< _a <<" wspolczynnik b to "<< _b<<std::endl;
}
void LinearFit::dopasuj(DataReader * dat)
{
	double suma_x=0,suma_y=0,suma_x_2=0,suma_xy=0;
	for(int i=0;i<dat->_zajete;++i)
	{

		suma_x+=(dat->_tab_x[i]);
		suma_y+=dat->_tab_y[i];
		suma_xy+=(dat->_tab_x[i]*dat->_tab_y[i]);
		suma_x_2+=(dat->_tab_x[i]*dat->_tab_x[i]);

	}

	_b=(suma_y*suma_x_2-suma_x*suma_xy)/(dat->_size*suma_x_2-suma_x*suma_x);
	_a=(dat->_size*suma_xy-suma_x*suma_y)/(dat->_size*suma_x_2-suma_x*suma_x);

}
} /* namespace oop */
