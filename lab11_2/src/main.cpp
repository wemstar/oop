//Tego pliku nie mozna modyfikowac!
//Napisz program, który wykryje na podstawie cech charakterystycznych kontenerów sekwencyjnych z jakim kontenerem ma doczynienia
//Nie wolno do tego celu użyć RTTI!
#include <algorithm>
#include "lab.h"

int main()
{
  typedef std::pair<std::string, test> el_type; //może być dowoln typ !!!
  std::vector<el_type> v;
  std::list<el_type> l;
  std::deque<el_type> d;

  std::fill_n(std::back_inserter(v), 100, el_type()); //wstawia 100 elentów a wartości el_type()
  std::fill_n(std::back_inserter(l), 100, el_type()); //wstawia 100 elentów a wartości el_type()
  std::fill_n(std::back_inserter(d), 100, el_type()); //wstawia 100 elentów a wartości el_type()

  std::cout << "--------------------------------\nv is_vector = " << is_vector(v) << "\n";
  std::cout << "l is_vector = " << is_vector(l) << "\n";
  std::cout << "d is_vector = " << is_vector(d) << "\n";
  //std::cout << "d is_vector = " << is_vector(d.begin(), d.end()) << "\n";

  std::cout << "--------------------------------\nv is_list = " << is_list(v) << "\n";
  std::cout << "l is_list = " << is_list(l) << "\n";
  std::cout << "d is_list = " << is_list(d) << "\n";

  std::cout << "--------------------------------\nv is_deque = " << is_deque(v) << "\n";
  std::cout << "l is_deque = " << is_deque(l) << "\n";
  std::cout << "d is_deque = " << is_deque(d) << "\n";
  std::cout << "--------------------------------\n";

}

/* Wynik działania programu
--------------------------------
v is_vector = 1
l is_vector = 0
d is_vector = 0
--------------------------------
v is_list = 0
l is_list = 1
d is_list = 0
--------------------------------
v is_deque = 0
l is_deque = 0
d is_deque = 1
--------------------------------
*/
