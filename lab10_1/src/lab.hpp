//tego pliku nie wolno modyfikować
#pragma once
#include <cstdio>
#include <string.h>
#include <typeinfo>
#include <iostream>
namespace oop{
struct test_pod{test_pod(int a = 0) : a(a){} int a;}; //typ POD

struct test_non_pod{ //typ nie POD
  ~test_non_pod(){}
  test_non_pod(int a = 0) : a(a){} int a;
};
template<typename T>
struct simple_copy
{
	static inline void copy(const T *a,T *b)
	{
		std::cout << "Type: " <<  typeid(T).name() << ": memcpy version\n";
		memcpy(b,a,sizeof(b));
	}
};
template<typename T>
struct complex_copy
{
	static inline void copy(const T *a,T *b)
	{
		std::cout << "Type: " <<  typeid(T).name() << ": operator= version\n";
		*b=*a;
	}
};
template<typename T>
struct pod_type
{
	typedef complex_copy<T> value;
};
template<>
struct pod_type<int>
{
	typedef simple_copy<int> value;
};
template<>
struct pod_type<double>
{
	typedef simple_copy<double> value;
};
template<>
struct pod_type<test_pod>
{
	typedef simple_copy<test_pod> value;
};
template<typename T>
void copy(const T &a,T&b)
{
	pod_type<T>::value::copy(&a,&b);
}
template<typename T>
void copy(const T *a,T* b)
{
	pod_type<T>::value::copy(a,b);
}
std::ostream &operator<<(std::ostream &os, const test_pod &obj)
	{
		os << obj.a;
		return os;
	}

	/**
		@brief Add test_non_pod object to output stream
		@param os Output stream
		@param obj Object to add
		@return Output stream
	 */
	std::ostream &operator<<(std::ostream &os, const test_non_pod &obj)
	{
		os << obj.a;
		return os;
	}

}

