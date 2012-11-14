#include "CountedPtr.h"
namespace OOP {
CountedPtr::CountedPtr(value_type* ptr) {
	_no = (1);
	_ptr = ptr;
}

CountedPtr::CountedPtr(const CountedPtr& sm) {
	_licznik = sm._licznik;
	_ptr = sm._ptr;
	++_licznik;
}

CountedPtr& CountedPtr::operator=(CountedPtr& sm) {
	if (this == &sm) 
		return *this;
	
	if (_licznik) {
		--_licznik;
		if (_licznik == 0) {
			delete _ptr;
			_ptr = 0;
			_no = 0;
		}
	}
	
	_licznik = sm._licznik;
	_ptr = sm._ptr;
	++_licznik;
	
	return *this;
}

CountedPtr::~CountedPtr() {
	if (_licznik) {
		
		--*_no;
		if (*_licznik == 0) {
			delete _ptr;
			_ptr = 0;

			_no = 0;
		}
	}
}

value_type* CountedPtr::operator->() const {
	return _ptr;
}

value_type& CountedPtr::operator*() const {
	return *_ptr;
}
CountedPtr& CountedPtr::operator=(value_type* sm)
{
	if (this->_ptr == sm)
			return *this;

		if (_no) {
			--_licznik;
			if (_licznik == 0) {
				delete _ptr;
				_ptr = 0;
				_licznik = 0;
			}
		}

		_licznik = 1;
		_ptr = sm;


		return *this;

}
}
