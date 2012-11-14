
#include "BaseClass.h"
namespace OOP {
typedef BaseClass value_type;
class array;
class CountedPtr {
public:
	friend void print_tab_el(const array &tab2);
	CountedPtr():_ptr(),_no(0){}
	CountedPtr(value_type*);
	CountedPtr(const CountedPtr& sm);
	CountedPtr& operator=(CountedPtr& sm);
	CountedPtr& operator=(value_type*);
	~CountedPtr();
	value_type* operator->() const;
	value_type& operator*() const;
	
	
	
private:
	value_type* _ptr;
	int *_no;
};
}
