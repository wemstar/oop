/*
 * Plik.h
 *
 *  Created on: 07-01-2013
 *      Author: wemstar
 */

#ifndef PLIK_H_
#define PLIK_H_
#include <fstream>
#include <vector>
#include "Czytacz.h"
namespace oop {

/*
 *
 */
template<typename T,char K>
class Plik {
public:

	Plik(std::ifstream *x):_Dok(x){
		_pozycja.push_back(0);
		_ilosc =0;
		char znak;

				while(!_Dok->eof()) {
					_Dok->get(znak);
					if (znak == K) {
						_pozycja.push_back(_Dok->tellg());
						++_ilosc;
					}
				}
	}
	unsigned no_of_lines(){return _ilosc;}
	unsigned no_of_cols(){return _ilosc;}
	T operator[](unsigned index){
	_Dok->clear();
	_Dok->seekg(_pozycja[index], std::ios::beg);
	return T(_Dok);
	}
private:
	std::ifstream * _Dok;
	unsigned _ilosc;
	std::vector<long> _pozycja;
};
typedef Plik<Czytacz,'\t'> Kolumny;
typedef Plik<Kolumny,'\n'> Linie;
} /* namespace oop */
#endif /* PLIK_H_ */
