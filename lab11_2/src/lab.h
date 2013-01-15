/*
 * lab.h
 *
 *  Created on: 13-01-2013
 *      Author: wemstar
 */

#ifndef LAB_H_
#define LAB_H_
#include <vector>
#include <deque>
#include <list>
#include <iostream>
#include <string>
struct test
{
	int a;
};
template<typename T>
int is_vector(T test)
{
	if(&*test.end()-&*test.begin()==100)return 1;
	return 0;
}
template<typename T>
int is_list(T test)
{
	if(&*++test.begin()-&*test.begin()<100)return 1;
		return 0;

}
template<typename T>
int is_deque(T test)
{
	if(&*++test.begin()-&*test.begin()>100)return 1;
		return 0;

}


#endif /* LAB_H_ */
