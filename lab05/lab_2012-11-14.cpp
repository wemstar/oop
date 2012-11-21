//Tego pliku nie można modyfikować
//
//Proszę napisać program realizujący dynamiczną tablicę przechowującą zmyślne wskaźniki
//Proszę wykorzystać CountedPtr z poprzednich zajęć.

#include "lab1.h"

typedef OOP::BaseClass value_type; //BaseClass to prosta klasa zawierająca tylko jeden składnik const char* lub std::string

#include "lab2.h"
#include <stdlib.h>
int main()
{
  OOP::array tab;

  for(int i = 0; i < rand()%10 + 1; i++)
  {

    tab.push_back(new OOP::BaseClass("BaseClass 1"));
    tab.push_back(new OOP::BaseClass("BaseClass 2"));
    tab.push_back(new OOP::BaseClass("BaseClass 3"));
  }

  OOP::print_tab_el(tab); //wypisuje tab korzystając z operator<< dla jej elementów

  const OOP::array tab2 = tab;

  OOP::print_tab_el(tab2); //wypisuje tab korzystając z operator<< dla jej elementów
}

/* Wynik wykonania programu:
[BaseClass 1]
[BaseClass 2]
[BaseClass 3]
[BaseClass 1]
[BaseClass 2]
[BaseClass 3]
[BaseClass 1]
[BaseClass 2]
[BaseClass 3]
[BaseClass 1]
[BaseClass 2]
[BaseClass 3]

[BaseClass 1]
[BaseClass 2]
[BaseClass 3]
[BaseClass 1]
[BaseClass 2]
[BaseClass 3]
[BaseClass 1]
[BaseClass 2]
[BaseClass 3]
[BaseClass 1]
[BaseClass 2]
[BaseClass 3]
*/

