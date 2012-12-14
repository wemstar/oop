/*
 * main.cpp
 *
 *  Created on: 04-12-2012
 *      Author: wemstar
 */
//Tego pliku nie mo¿na modyfikowaæ
//
//Proszê uzupełnić program z poprzednich zajęć tak aby miał obsługę wyjątków
//Proszę deklarwać funkcje odpowiednio pod względem obsługi wyjątków
//
//Brak błędów kompilacji przy zdefiniwanych COMPILE_ERROR[1-2] rownież dyskwalifikuje zadanie!!!
#include <cstdlib>
#include <ctime>
#include "lab.h"

using namespace oop;

int main(int argc, char** argv)
{
	try
	{
		Vector v(2); // allokuje pamięć dla dwóch elementów, a potem zwiększ ją zawsze o 2 razy, czyli 2,4,8,16,....

        srand(time(NULL));

        for(int i = 0; i < random::get(10,20); ++i) // pseudolosowa z przedziału [10, 20) - używa rand
        {
        	v.push_front(new Dobule(1.0 + i)); //wstawia na poczatek
            v.insert(0, new String("Test string")); //wstawia na pozycję 0
            v.push_back(new Point(i, i+ 1.1)); //wstawia na koniec
        }

        std::cout << "Vector v:\n" << v << "\n";

        for(int i = 0; i < 10;)
        {
        	try
        	{
        		(v[random::get(60)])->print(); //wypisuje wartość z pod indeksu [random::get(60)] przedzial [0,60)
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
    	exception_handler::process(e); //wypisuje na cout to co niesie wyjątek
    }
    CATCH_ALL_EXCEPTIONS
    {
    }

    #ifdef COMPILE_ERROR1
            vector test = v;
    #endif
    #ifdef COMPILE_ERROR2
            v = v;
    #endif

    }



