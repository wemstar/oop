/*
 * Czytacz.h
 *
 *  Created on: 07-01-2013
 *      Author: wemstar
 */

#ifndef CZYTACZ_H_
#define CZYTACZ_H_
#include<fstream>
namespace oop {

/*
 *
 */
class Czytacz {
public:
	Czytacz(std::ifstream* x):_plik(x){}
	template<typename T>
	T as(){
		T wartosc;
		*_plik >> wartosc;
		return wartosc;
	}
private:
	std::ifstream * _plik;
};

} /* namespace oop */
#endif /* CZYTACZ_H_ */
