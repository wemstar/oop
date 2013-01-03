//tego pliku nie wolno modyfikować
//napisać zadanie które skopiuje obiekty (lub ich wskaźniki) typów POD za pomocą memcpy a resztę operatorem=;
//integralną częścią zadania jest plik nagłówkowy

#include "lab.h"

int main(int argc, char** argv)
{
  {
    typedef double type; //typ POD
    const type a = 2;
    type b = 0;
    oop::copy(a, b);
    oop::copy(&a, &b);
    std::cout << a << " " << b << "\n\n";
  }

  {
    typedef int type; //typ POD
    const type a = 2;
    type b = 0;
    oop::copy(&a, &b);
    oop::copy(a, b);
    std::cout << a << " " << b << "\n\n";
  }

  {
    typedef oop::test_pod type; //typ POD
    const type a = 2;
    type b = 0;
    oop::copy(a, b);
    oop::copy(&a, &b);
    std::cout << a << " " << b << "\n\n";
  }

  {
    typedef oop::test_non_pod type; //typ nie POD
    const type a = 2;
    type b = 0;
    oop::copy(a, b);
    oop::copy(&a, &b);
    std::cout << a << " " << b << "\n\n";
  }

}
/* Wynik działania:
Type: d: memcpy version
Type: d: memcpy version
2 2

Type: i: memcpy version
Type: i: memcpy version
2 2

Type: N3oop8test_podE: memcpy version
Type: N3oop8test_podE: memcpy version
2 2

Type: N3oop12test_non_podE: operator= version
Type: N3oop12test_non_podE: operator= version
2 2

*/
