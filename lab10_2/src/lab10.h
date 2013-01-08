/*
 * lab10.h
 *
 *  Created on: 05-01-2013
 *      Author: wemstar
 */

#ifndef LAB10_H_
#define LAB10_H_
#include <iostream>
/*std::string get_typename(const char* GCC_TYPE_NAME) {
	int status;
	std::string result(abi::__cxa_demangle(GCC_TYPE_NAME, 0, 0, &status));
	return result;
}
class test
{
public:
	test(int x):a(x){}
	int a;
	friend std::ostream& operator <<(std::ostream &strem,const test& obj);
};
std::ostream& operator <<(std::ostream &strem,const test& obj){
	strem << obj.a;
	return strem;
}
template<typename T>
class SmartPtr
{
public:
	typedef T value_type;
	SmartPtr():_ptr(0),_licz(new int(0)){}
	SmartPtr(T * obj):_ptr(obj),_licz(new int(1)){}
	SmartPtr(const SmartPtr& obj):_ptr(obj._ptr),_licz(obj._licz){if(_ptr)++*_licz;}
	T* operator->()const{return _ptr;}
	T& operator*()const{return *_ptr;}
	SmartPtr& operator=(const SmartPtr& obj);
	void info(std::ostream& ) const;
	~SmartPtr();
private:
	void _tworzenie(const SmartPtr<T>&  obj);
	void _niszcenie();
	T* _ptr;
	int * _licz;

};
typedef SmartPtr<test> test_smart_ptr ;
typedef SmartPtr<SmartPtr<test> > unknown_type  ;
typedef SmartPtr<const test> const_test_smart_ptr;
typedef SmartPtr<std::string> string_smart_ptr;
template<typename T>
SmartPtr<T>::~SmartPtr()
{
	_niszcenie();
}
template<typename T>
void SmartPtr<T>::_niszcenie()
{
	if (_ptr && !--*_licz) {
			delete _ptr;
			delete _licz;
		}
		else if (!_ptr)
			delete _ptr;

}
template<typename T>
void SmartPtr<T>::_tworzenie(const SmartPtr<T>&  obj)
{
	_ptr=obj._ptr;
	_licz=obj._licz;
	if(_ptr)++*_licz;
}
template<typename T>
SmartPtr<T>& SmartPtr<T>::operator=(const SmartPtr<T>& obj){
	if(this==&obj)return *this;
	_niszcenie();
	_tworzenie(obj);
	return *this;

}
template <typename T>
void SmartPtr<T>::info(std::ostream& o) const {
	o << "Type: " << get_typename(typeid(T).name()) << ", object: ";
	_ptr ? (o << *_ptr) : (o << "NULL");
	o << ", reference count: " << *_licz << std::endl;
}*/
#include <cxxabi.h>
#include <string>
#include <cstdlib>
#include <iostream>
#include <typeinfo>

/*******************************************************/

std::string get_typename(const char* GCC_TYPE_NAME) {
	int status;
	std::string result(abi::__cxa_demangle(GCC_TYPE_NAME, 0, 0, &status));
	return result;
}

/*******************************************************/

class test {
public:
	test(int = 0);
	int a;
};

test::test(int value) : a(value) {}

std::ostream& operator<<(std::ostream& o, const test& Obj) {
	o << Obj.a;
	return o;
}

/*******************************************************/

template <typename T>
class SmartPtr {
public:
	typedef T value_type;
	SmartPtr();
	SmartPtr(value_type*);
	SmartPtr(const SmartPtr&);
	~SmartPtr();
	T& operator*() const;
	T* operator->() const;
	SmartPtr& operator=(SmartPtr);
	void info(std::ostream&) const;
protected:
	void _dealloc();
	void _alloc(SmartPtr&);
	T* _ptr;
	int* _refs;
};

typedef SmartPtr<test> test_smart_ptr;
typedef SmartPtr<SmartPtr<test> > unknown_type;
typedef SmartPtr<const test> const_test_smart_ptr;
typedef SmartPtr<std::string> string_smart_ptr;

template <typename T>
SmartPtr<T>::SmartPtr() : _ptr(0), _refs((0)) {
}

template <typename T>
SmartPtr<T>::SmartPtr(T* Ptr) : _ptr(Ptr), _refs(new int(1)) {
}

template <typename T>
SmartPtr<T>::SmartPtr(const SmartPtr<T>& Ptr) : _ptr(Ptr._ptr), _refs(Ptr._refs) {
	if (_ptr)
		++*_refs;
}

template <typename T>
SmartPtr<T>::~SmartPtr() {
	_dealloc();
}

template <typename T>
T& SmartPtr<T>::operator*() const {
	return *_ptr;
}

template <typename T>
T* SmartPtr<T>::operator->() const {
	return _ptr;
}

template <typename T>
SmartPtr<T>& SmartPtr<T>::operator=(SmartPtr<T> Ptr) {
	if (this==&Ptr)
		return *this;
	_dealloc();
	_alloc(Ptr);
	return *this;
}

template <typename T>
void SmartPtr<T>::info(std::ostream& o) const {
	o << "Type: " << get_typename(typeid(T).name()) << ", object: ";
	_ptr ? (o << *_ptr<< ", reference count: " << *_refs << std::endl) : (o << "NULL"<< ", reference count: " << 0 << std::endl);

}

template <typename T>
void SmartPtr<T>::_dealloc() {
	if (_ptr && !--*_refs) {
		delete _ptr;
		delete _refs;
	}
	else if (!_ptr)
		delete _ptr;
}

template <typename T>
void SmartPtr<T>::_alloc(SmartPtr<T>& Ptr) {
	_ptr = Ptr._ptr;
	_refs = Ptr._refs;
	if (_ptr)
		++*_refs;

}

/*******************************************************/

using namespace std;
#endif /* LAB10_H_ */
