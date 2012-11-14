/*
 * CountedPtr.h
 *
 *  Created on: 07-11-2012
 *      Author: wemstar
 */

#ifndef COUNTEDPTR_H_
#define COUNTEDPTR_H_

/*
 *
 */

class CountedPtr {
public:
	CountedPtr():wskaznik(0),licznik(0){}
	CountedPtr(value_type *a);
	CountedPtr( const CountedPtr &sp);
	~CountedPtr();
	value_type & operator*() const;
	value_type * operator->()const;
	CountedPtr & operator=(  CountedPtr& a) ;
	CountedPtr & operator =( value_type  *a);
private:
	value_type* wskaznik;
	int licznik;
	void destruktor();
};

#endif /* COUNTEDPTR_H_ */
