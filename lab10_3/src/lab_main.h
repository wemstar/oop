/*
 * lab_main.h
 *
 *  Created on: 08-01-2013
 *      Author: wemstar
 */

#ifndef LAB_MAIN_H_
#define LAB_MAIN_H_

#include <fstream>
#include <iostream>
#include <iomanip>
template<typename T,int size>
class static_array
{
public:
	T & operator[](int n){return _tab[n];}
private:
	int _tab[size];
};
class skip
{
public:
	skip(char znak,bool tryb=true):_znak(znak),_tryb(tryb){}
	void operator()(std::istream & stream)const{
		char c;
		while(stream.get(c)&&c!=_znak);

	}
private:
	char _znak;
	bool _tryb;

};
class fill
{
public:
public:
	fill(char znak='-',int tryb=20):_znak(znak),_ilosc(tryb){}
	void operator()(std::ostream & stream)const{
		for(int i=0;i<_ilosc;++i)stream<<_znak;
	}
private:
	char _znak;
	int _ilosc;
};
std::istream & operator>>(std::istream& strema, const skip& f){
	f(strema);
	return strema;}
std::ostream & operator<<(std::ostream& strema,const fill& f){
	f(strema);
	return strema;}

void set_params(std::ifstream& x){}
void reset_params(std::ifstream& x){}

#endif /* LAB_MAIN_H_ */
