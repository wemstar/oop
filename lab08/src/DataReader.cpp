/*
 * DataReader.cpp
 *
 *  Created on: 10-12-2012
 *      Author: wemstar
 */

#include "DataReader.h"
#include <iostream>
namespace oop {

DataReader::DataReader(int size):_zajete(-1),_size(size) {


}

DataReader::~DataReader() {

}
void DataReader::read_data(std::istream &a)
{
	char d;
	do
	{
		++_zajete;
		std::cin >> _tab_x[_zajete] >>  d >> _tab_y[_zajete];



	}while(!std::cin.eof());
}
DataReader * DataReader::get()
{
	return this;
}
} /* namespace oop */
