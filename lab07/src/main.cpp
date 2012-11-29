//Tego pliku nie moÂżna modyfikowaĂŚ
//
//Stan z poprzednich zajec:
//Implementujemy hierarchiĂŞ dziedziczenie dla kontenerow sekwnecyjnych i asocjacyjnych reprezentowanych odpwoednio przez:
// (List i Vector) oraz (SortedTree, SortedMultiTree, HashTree, HashMultiTree). Wersje Multi przechowywaĂŚ bĂŞdÂš duplikaty
//
//ProszĂŞ teraz zaimplementowaĂŚ klasĂŞ Vector z peÂłnÂš obsÂługÂš bÂłedĂłw w sposĂłb taki iÂż bĂŞdzie ona ciÂšgÂłÂš tablicÂš dynamicznÂš
//Vector przechowywaĂŚ bĂŞdzie wskaÂniki do odpowiedniej klasy
#include <cstdlib>
#include <ctime>

#include "lab.h"

using namespace oop;

int main(int argc, char** argv)
{
  try
  {
          Vector v(2); // allokujĂŞ pamiĂŞĂŚ dla dwĂłch elementĂłw, a potem zwiĂŞksz jÂš zawsze o 2 razy, czyli 2,4,8,16,....

          srand(time(NULL));

          for(int i = 0; i < random::get(10,20); ++i) // pseudolosowa z przedziaĹu [10, 20) - uĹźywa rand
          {
                  v.push_front(new Dobule(1.0 + i)); //wstawia na poczatek
                  v.push_back(new Int(100 + i));     //wstawia na koniec
          }

          for(int i = 0; i < 5;)
          {
            try
            {
            	(v[random::get(60)])->print(); //wypisuje wartoĹ z pod indeksu [random::get(60)] przedzial [0,60)
            }
            CATCH_EXCEPTION_BAD_INDEX
            {
                    exception_handler::process(e);   //wypisuje na cout "EXCEPTION: Index out of bound at location XXX"
                    ++i;
            }
          }
  }
  CATCH_ALL_STANDARD_EXCEPTIONS
  {
    exception_handler::process(e); //wypisuje na cout to co niesie wyjÄ

  }
  CATCH_ALL_EXCEPTIONS
  {
  }
}

#ifdef COMPILE_ERROR //ustawienie tej dyrektywy generuje bÂłÂšd kompilacji w kaÂżdej lini mimo iÂż typy stojÂšce za new istniejÂš w hierachi dziedziczenia!
        Container();
        SquenceContainer();
        TreeContainer();
        SortedTreeContainer();
        HashTreeContainer();
#endif

