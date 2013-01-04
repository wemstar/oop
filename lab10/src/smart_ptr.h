/*
 * smart_ptr.h
 *
 *  Created on: 04-01-2013
 *      Author: wemstar
 */

#ifndef SMART_PTR_H_
#define SMART_PTR_H_
#include <cstdlib>
#include <string>
using namespace std;

template<typename T>
class NoCopy
{
public:
	NoCopy(T* a):_wsk(a){}
	~NoCopy(){delete _wsk;}
	T operator*(){return *_wsk;}

protected:
	NoCopy(const  NoCopy<T>& x){}
private:
	T* _wsk;


};
template<typename T>
class RefCounted
{
public:
	RefCounted(T* a):_wsk(a),_ref_count(new int(1)){}
	RefCounted(const  RefCounted& x)
	{
		if(x._ref_count)
		{
			_wsk=x._wsk;
			_ref_count=x._ref_count;
			++*_ref_count;
		}
	}
	~RefCounted(){
		if(_ref_count && *_ref_count)
		{
			--*_ref_count;
			if(*_ref_count==0)
			{
				delete _ref_count;
				delete _wsk;
				_wsk=0;
				_ref_count=0;
			}
		}
		}
	T operator*(){return *_wsk;}
private:
	int *_ref_count;
	T* _wsk;

};
template<typename T,typename K=RefCounted<T> >
class SmartPtr:public K
{
public:
	SmartPtr(T* a):K(a){}
	~SmartPtr(){}
};


#endif /* SMART_PTR_H_ */
