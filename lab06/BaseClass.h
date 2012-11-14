/*
 * BaseClass.h
 *
 *  Created on: 14-11-2012
 *      Author: wemstar
 */

#ifndef BASECLASS_H_
#define BASECLASS_H_
#include <string>
using namespace std;
namespace OOP {

/*
 *
 */
class BaseClass {
public:
	friend ostream & operator << (ostream&,BaseClass&);
	BaseClass(string a="");
	string napis;
};

} /* namespace OOP */
#endif /* BASECLASS_H_ */
