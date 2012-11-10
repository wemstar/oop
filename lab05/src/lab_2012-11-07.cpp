//Tego pliku nie można modyfikować
//
//Proszę napisać program realizujący zmyślny wskaźnik np. na podstawie zliczania referencji
//Proszę klasę CountedPtr zaimplementować raz, ale w taki sposób żeby dało się ja wykorzystać dla typu Int_t i Double_t (oraz dowolnego innego).
//Int_t i Double_t mają być prostymi klasami opakowującymi int i double posiadającymi odpowiednia funkcjonalność do zadziałania programu (Państwo decydyjecie o sposobie!).
//Program kompilowany bedzie 2 razy z odpowiednimi ustawionymi parametrami preporcessora.
//
//Proszę przeczytać help do make (komenda make help)

#include <iostream>
#include <typeinfo>

#define INT_BASED_PTR
#ifdef INT_BASED_PTR
  #include "Int_t.h"
   int v1 = 1234, v2 = 2345;

#endif

#ifdef DOUBLE_BASED_PTR
  #include "Double_t.h"
  const double v1 = 1.234, v2 = 2.345;

#endif

int main()
{

  CountedPtr p0(new value_type(v1));
  const CountedPtr p1 = p0;

  std::cout << "p0 = " << *p0 << ", p1 = " << *p1 << "\n";

  CountedPtr p2 = CountedPtr(new value_type(v2));

  std::cout << "p2 = " << *p2 << "\n";
  p2 = p0;

  std::cout << "p2 = " << *p2 << ", get() = " << p2->get() << "\n"; //proszę zwrócić uwagę na różnicę w typach zwracanym przez *p2 i p2->get()!
  
  std::cout << "Typ *p2 (nazwana GCC) -> " << typeid(*p2).name()
            << "\nTyp p2->get() (nazwana GCC) -> " << typeid(p2->get()).name() << "\n";
}

/* Wynik wykonania programu dla Int_t:
p0 = 1234, p1 = 1234
p2 = 2345
p2 = 1234, get() = 1234
Typ *p2 (nazwana GCC) -> 5Int_t
Typ p2->get() (nazwana GCC) -> i
*/

/* Wynik wykonania programu dla Double_t:
p0 = 1.234, p1 = 1.234
p2 = 2.345
p2 = 1.234, get() = 1.234
Typ *p2 (nazwana GCC) -> 8Double_t
Typ p2->get() (nazwana GCC) -> d
*/
