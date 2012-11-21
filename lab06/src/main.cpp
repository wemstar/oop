/*
 * main.cpp
 *
 *  Created on: 21-11-2012
 *      Author: wemstar
 */
//Tego pliku nie można modyfikować
//
//Proszę napisać program realizujšcy hierarchię klas wynikajšcš z poniższego programu
//Proszę wypełnić pełnš implementacja tylko metodę name() - pozwalajšcš wypisać nazwę klasy
//Resztę metod proszę zaimplementwoać w minimalnym stopniu tak aby program był poprawny
//Implementujemy hierarchię dziedziczenie dla kontenerów sekwnecyjnych i asocjacyjnych reprezentowanych odpwoednio przez:
// (List i Vector) oraz (SortedTree, SortedMultiTree, HashTree, HashMultiTree). Wersje Multi przechowywać będš duplikaty
//
//Proszę użyć poniższej metody do ładnego nazwyania klas
//
//Uwaga brak dokumentacji dyskwalifikuje zadanie - należy napisać dlaczego tak a nie inaczej dziedziczymy!!!!
//

#include <stdlib.h>
#include <cxxabi.h>
#include <string>

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

#include "lab.h"

using namespace oop;

int main(int argc, char** argv)
{
        Object();

        std::auto_ptr<Object> o  (new Object);
        std::cout << o->name() << "\n";

        o = std::auto_ptr<Object>(new List);
        std::cout << o->name() << "\n";

        o = std::auto_ptr<Object>(new Vector);
        std::cout << o->name() << "\n";

        o = std::auto_ptr<Object>(new SortedTree);
        std::cout << o->name() << "\n";

        o = std::auto_ptr<Object>(new SortedMultiTree);
        std::cout << o->name() << "\n";

        o = std::auto_ptr<Object>(new HashTree);
        std::cout << o->name() << "\n";

        o = std::auto_ptr<Object>(new HashMultiTree);
        std::cout << o->name() << "\n";

#ifdef COMPILE_ERROR //ustawienie tej dyrektywy generuje błšd kompilacji w każdej lini mimo iż typy stojšce za new istniejš w hierachi dziedziczenia!
        o = std::auto_ptr<Object>(new Container);
        o = std::auto_ptr<Object>(new SquenceContainer);
        o = std::auto_ptr<Object>(new TreeContainer);
        o = std::auto_ptr<Object>(new SortedTreeContainer);
        o = std::auto_ptr<Object>(new HashTreeContainer);
#endif

        std::auto_ptr<SquenceContainer> s  (new List);
        s = std::auto_ptr<SquenceContainer>(new Vector);
        std::cout << s->name() << "\n";

        s->push_front(o.get()); //imituje wstawienie na poczštek
        s->push_back(o.get()); //imituje wstawienie na koniec

        std::auto_ptr<Container> c  (new SortedTree);
        c = std::auto_ptr<Container>(new SortedMultiTree);
        c = std::auto_ptr<Container>(new HashTree);
        c = std::auto_ptr<Container>(new HashMultiTree);
        std::cout << c->name() << "\n";

        c->size();  //zwraca iloć elementów
        c->empty(); //zwraca czy kontener jest pusty
        c->insert(s.get()); //imituje wstawienie (lub rozpoczęcie wyszykiwania miejsca wstawienia) do dowolnego kontenera wartoci, domylnie na pozycję 0.

}

/*Wynik dziłania
oop::Object
oop::List
oop::Vector
oop::SortedTree
oop::SortedMultiTree
oop::HashTree
oop::HashMultiTree
oop::Vector
oop::HashMultiTree
*/


