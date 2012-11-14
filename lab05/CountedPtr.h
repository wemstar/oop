
#include "BaseClass.h"
/*!
 * @brief plik zawiera klase counted Ptr
 */
namespace OOP {
typedef BaseClass value_type;
class array;
class CountedPtr {
public:
	/*!
	 *  @brief funkcja zaprzyjaźnina
	 *
	 *  /param tab2 referencja do elemnetu tablicy
	 */
	friend void print_tab_el(const array &tab2);
	/*!
	 *  @brief konstruktor domyslny
	 */
	CountedPtr():_ptr(),_licznik(0){}
	/*!
	 *  konstruktor konwertujący
	 *
	 */
	CountedPtr(value_type*);
	/*!
	 *  konstuktor kopiujący
	 */
	CountedPtr(const CountedPtr& sm);
	/*!
	 * operator przypisania
	 * @param sm referencja do zmyślnego wskaźnika
	 */
	CountedPtr& operator=(CountedPtr& sm);
	/*!
	 * operator przypisania
	* @param sm referencja do do typu wskazywanego
	 */
	CountedPtr& operator=(value_type*);
	~CountedPtr();
	/*!
	 *  przeładowany operator dostępu
	 *
	 */
	value_type* operator->() const;
	/*!
	 *  przyladowany operator dereferencji
	 */
	value_type& operator*() const;
	
	
	
private:
	/*!
	 *  wskaznik na pokazywany typ
	 */
	value_type* _ptr;
	/*
	 *  wskażnik do licznika
	 */
	int _licznik;
};
}
