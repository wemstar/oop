/*
 * BadIndexError.h
 *
 *  Created on: 29-11-2012
 *      Author: wemstar
 */

#ifndef BADINDEXERROR_H_
#define BADINDEXERROR_H_

#include "VectorStandardError.h"

namespace oop {

/*
 *
 */
class BadIndexError: public oop::VectorStandardError {
public:
	virtual const char* what() const throw()
	  {
	    return "niepoprawny indeks \n";
	  }

};

} /* namespace oop */
#endif /* BADINDEXERROR_H_ */
