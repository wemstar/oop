/*
 * Opakowanie.h
 *
 *  Created on: 13-12-2012
 *      Author: wemstar
 */
#include <iostream>
#ifndef OPAKOWANIE_H_
#define OPAKOWANIE_H_
template <typename T>
#include <iostream>
class Opakowanie {
public:
	Opakowanie(T a=0);
	friend std::ostream &operator<<(std::ostream & stream,const Opakowanie<T>& a)
	{
		return stream << a._x << " " ;
	}
	void print()
	{
		std::cout << _x << "\n";
	}

private:
	T _x;
};
template <typename T>
Opakowanie< T >::Opakowanie(T a):_x(a) {


}
typedef Opakowanie<int> Int_t;
typedef Opakowanie<double> Double_t;



#endif /* OPAKOWANIE_H_ */
