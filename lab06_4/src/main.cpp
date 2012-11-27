//Tego pliku nie mo�na modyfikowa�
//
//Prosz� napisa� program realizuj�cy hierarchi� klas wynikaj�c� z poni�szego pliku
//
//Uwaga brak dokumentacji dyskwalifikuje zadanie - nale�y napisa� dlaczego tak a nie inaczej dziedziczymy!!!!
//
//Brak b��d�w kompilacji przy zdefiniwanych COMPILE_ERROR[1-2] rownie� dyskwalifikuje zadanie!!!

#include "lab.h"

using namespace oop;

int main(int argc, char** argv)
{
std::auto_ptr<Vector> v1(new Vector);

  v1->push_back(new String("Test string"));
  v1->push_back(new Double(2.2));
  v1->push_back(new Point(2.2, 2.2));

  std::auto_ptr<Vector> v2(new Vector(v1->clone()));
  v2->push_back(new Vector(v1->clone()));

  std::cout << "v1:\n" << *v1 << "\n\nv2:\n" << *v2;

#ifdef COMPILE_ERROR1
	Vector test = *v1;
#endif
#ifdef COMPILE_ERROR2
	*v1 = *v1;
#endif

}

