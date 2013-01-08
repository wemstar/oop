
/* W celu uzyskania ladnych nazw typow nalezy skorzystac z ponizszwgo kodu,
odpowiednio go modyfikujac
naglowek: */
#include <cxxabi.h>


#include "lab10.h"

template<typename T>
struct is_const{static const bool value = 0;};

template<typename T>
struct is_const<const T>{static const bool value = 1;};

int main(){

  test_smart_ptr test_ptr_1(new test(1));
  unknown_type test_ptr_2(new unknown_type::value_type(test_ptr_1));
  test_smart_ptr test_ptr_3;

  std::cout << "test_smart_ptr::value_type is const: " << is_const<test_smart_ptr::value_type>::value << "\n";

  std::cout << "[Dostep przez ->] " << test_ptr_1->a << "\n";
  test_ptr_1.info(std::cout);

  test_ptr_3 = *test_ptr_2;

  (*test_ptr_3).a = 8;

  test_ptr_1.info(std::cout);

  test_ptr_2 = unknown_type();
  test_ptr_3 = unknown_type::value_type();

  test_ptr_1->a -= 5;
  test_ptr_1.info(std::cout);

  //------------------------------------------------
  const_test_smart_ptr test_const_ptr(new test(3));

  std::cout << "test_const_ptr::value_type is const: " << is_const<const_test_smart_ptr::value_type>::value << "\n";
  std::cout << "[Dostep przez -> i *] " << test_const_ptr->a << " " << *test_const_ptr << "\n";

  test_const_ptr.info(std::cout);

  //------------------------------------------------
  string_smart_ptr string_ptr_1;
  string_smart_ptr string_null_ptr;
  string_ptr_1 = new std::string("test string");

  string_smart_ptr string_ptr_2 = string_ptr_1;
  std::cout << "[Dostep przez *] " << *string_ptr_2 << "\n";

  {
    string_smart_ptr vec[998];
    for(int i = 0; i < 998; ++i)
      string_ptr_1 = vec[i] = string_ptr_1;

    string_ptr_1.info(std::cout);
  }

  string_ptr_1.info(std::cout);

  string_ptr_2 = string_null_ptr;
  string_ptr_1.info(std::cout);

  string_ptr_1 = string_null_ptr;
  string_ptr_1.info(std::cout);
}

/* Wyjscie z programu:
test_smart_ptr::value_type is const: 0
[Dostep przez ->] 1
Type: test, object: 1, reference count: 2
Type: test, object: 8, reference count: 3
Type: test, object: 3, reference count: 1
test_const_ptr::value_type is const: 1
[Dostep przez -> i *] 3 3
Type: test, object: 3, reference count: 1
[Dostep przez *] test string
Type: std::string, object: test string, reference count: 1000
Type: std::string, object: test string, reference count: 2
Type: std::string, object: test string, reference count: 1
Type: std::string, object: NULL, reference count: 0
*/ /* main.cpp
 *
 *  Created on: 03-01-2013
 *      Author: wemstar
 */




