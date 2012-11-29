/*
 * Object.cpp
 *
 *  Created on: 21-11-2012
 *      Author: wemstar
 */

#include "Object.h"
#include <stdlib.h>
#include <cxxabi.h>
#include <string>
namespace oop {
struct tool{
        static std::string rtti_real_name(const char* name)
        {
                int status;
                char *realname = abi::__cxa_demangle(name, 0, 0, &status);
                std::string n(realname);
                free(realname);

                return n;
        }
};
Object::Object() {
	// TODO Auto-generated constructor stub

}

Object::~Object() {

}
std::string Object::name()
{
	return tool::rtti_real_name(typeid(*this).name());
}

} /* namespace oop */
