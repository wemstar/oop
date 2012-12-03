/*
 * VectorStandardError.h
 *
 *  Created on: 29-11-2012
 *      Author: wemstar
 */

#ifndef VECTORSTANDARDERROR_H_
#define VECTORSTANDARDERROR_H_

#include <exception>

namespace oop {

/*
 *
 */
class VectorStandardError: public std::exception {
public:
	virtual const char* what() const throw()
	  {
	    return "Błąd tablicy";
	  }

};

} /* namespace oop */
#endif /* VECTORSTANDARDERROR_H_ */
