/*
 * lab.h
 *
 *  Created on: 15-01-2013
 *      Author: wemstar
 */

#ifndef LAB_H_
#define LAB_H_
#include <vector>
#include <list>
#include <iostream>
#include <sstream>
#include <cmath>
std::ostream & operator<<(std::ostream & str,const std::pair<std::string, double> &para)
{
	str<<'[' <<para.first<<','<<para.second<<']';
	return str;
}
struct set_value
{
	set_value(std::string str,double d):_pierwszy(str),_drugi(d){}
	std::string _pierwszy;
	double _drugi;
	void operator()(std::pair<std::string, double> &para)
	{
		para.first=_pierwszy;
		para.second=++_drugi;

	}
};
template<typename T>
std::string stl_print_fn(T beg,T end,const char* str)
{
	std::stringstream stra;
	if (beg != end) {
			stra << *beg;
		}
	for(++beg;beg != end;++beg)
	{
		stra<< *beg <<str;
	}
	return stra.str();

}
namespace oop
{
	template <typename T>
	T find(T begin, T end, typename std::iterator_traits<T>::value_type needle)
	{

		for(; begin != end; ++begin) {

			if (begin->first == needle.first && std::abs(begin->second-needle.second) < 1e-10) {
				break;
			}
		}
		return begin;
	}
}
#endif /* LAB_H_ */
