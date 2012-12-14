/*
 * DataReader.h
 *
 *  Created on: 10-12-2012
 *      Author: wemstar
 */

#ifndef DATAREADER_H_
#define DATAREADER_H_
#include <iostream>
namespace oop {

/*
 *
 */
class LinearFit;
class SlopeFit;
class DataReader {
public:
	friend class LinearFit;
	friend class SlopeFit;
	DataReader(int size=0);
	void read_data(std::istream &a);
	DataReader * get();
	virtual ~DataReader();
private:
	int _zajete;
	int _size;
	double _tab_x[100];
	double _tab_y[100];
};


} /* namespace oop */
#endif /* DATAREADER_H_ */
