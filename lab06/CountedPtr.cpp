#include "CountedPtr.h"
namespace OOP {
CountedPtr::CountedPtr(value_type* ptr) {
	_no = new int(1);
	_ptr = ptr;
}

CountedPtr::CountedPtr(const CountedPtr& sm) {
	_no = sm._no;
	_ptr = sm._ptr;
	++*_no;
}

CountedPtr& CountedPtr::operator=(CountedPtr& sm) {
	if (this == &sm) 
		return *this;
	
	if (_no) {
		--*_no;
		if (*_no == 0) {
			delete _ptr;
			_ptr = 0;
			delete _no;
			_no = 0;
		}
	}
	
	_no = sm._no;
	_ptr = sm._ptr;
	++*_no;
	
	return *this;
}

CountedPtr::~CountedPtr() {
	if (_no) {
		
		--*_no;
		if (*_no == 0) {
			delete _ptr;
			_ptr = 0;
			delete _no;
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
			--*_no;
			if (*_no == 0) {
				delete _ptr;
				_ptr = 0;
				delete _no;
				_no = 0;
			}
		}

		_no = new int(1);
		_ptr = sm;


		return *this;

}
}
