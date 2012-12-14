/*
 * list.h
 *
 *  Created on: 13-12-2012
 *      Author: wemstar
 */
#include <iostream>
#ifndef LIST_H_
#define LIST_H_
template <typename T>
class list
{
public:
	struct przechowanie{
		przechowanie(T a):_value(a),_next(NULL){}
		~przechowanie(){delete _next;}
		przechowanie* _next;
		T _value;
		};
public:
	list():_head(NULL){}
	~list(){delete _head;}
	void push_front(T);
	void push_back(T);
	void insert(przechowanie*,T);
	przechowanie * begin(){return _head;}
	przechowanie * end(){
		list<T>::przechowanie* tmp=_head;
			while(tmp->_next)
			{
				tmp=tmp->_next;
			}
			return tmp;
	}
	typedef T value_type;
	typedef przechowanie* iterator;
	friend void printTo(przechowanie* poczatek,przechowanie* koniec,std::ostream& stream)
	{
		przechowanie* aktualen=poczatek;
		while(aktualen)
		{
			stream << aktualen->_value;
			aktualen=aktualen->_next;
		}
		stream << std::endl;

	}
private:

	przechowanie * _head;


};
template <typename T>
void list<T>::push_front(T obiekt){
	if(_head==NULL){
		_head=new przechowanie(obiekt);
	}else
	{
		przechowanie *tmp=new przechowanie(obiekt);
		tmp->_next=_head;
		_head=tmp;
	}


}
template <typename T>
void list<T>::push_back(T obiekt){
	if(_head==NULL){
		_head=new przechowanie(obiekt);
	}else
	{
		przechowanie *tmp=new przechowanie(obiekt);
		przechowanie *aktualne=_head;
		while(aktualne->_next)
		{
			aktualne=aktualne->_next;
		}
		aktualne->_next=tmp;
	}


}
template <typename T>
void list<T>::insert(przechowanie* a,T b){
	a->_value=b;

}






#endif /* LIST_H_ */
