/*
 * SlopeFit.cpp
 *
 *  Created on: 10-12-2012
 *      Author: wemstar
 */

#include "SlopeFit.h"

namespace oop {


void SlopeFit::dopasuj(DataReader * dat){
	double sum_1=0;
	double sum_2=0;

	for(int i=0;i<dat->_zajete;++i)
	{
		sum_1+=(dat->_tab_x[i]*dat->_tab_y[i]);
		sum_2+=(dat->_tab_x[i]*dat->_tab_x[i]);
	}

	_a=sum_1/sum_2;
}
 void SlopeFit::print(std::ostream &stre)
{

	 stre<< "parametr to "<<_a<<std::endl;
}
} /* namespace oop */
