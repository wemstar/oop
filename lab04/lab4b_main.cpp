#include <iostream>
#include "Vector.h"

int main(int argc, char * argv[])
{
	Vector tab; 
	
	std::cout << "Rozmiar: " << tab.capacity() << "\n"; //pojemność == 10
	std::cout << "Liczba elementow: " << tab.size() << "\n"; //rozmiar == 0

	tab.read_from_cin(); //wczytaj dane z cin

	std::cout << "Rozmiar: " << tab.capacity() << "\n"; //pojemność == 10
	std::cout << "Liczba elementow: " << tab.size() << "\n"; //rozmiar == 10
	
	tab.print_to_cout(); //drukuje wszysto na stdout
	
	tab.push_front(-10); //pierwszy element == -10.0
	tab.push_back(10); //ostatni element == 10.0
	
	std::cout << "Pierwszy element: " << tab.head() << "\n"; //-10
	std::cout << "Ostatni element: " << tab.tail() << "\n"; //10
	
	tab.resize(tab.size() + 100); //powiekszamy rozmiar o 100 == 112
	tab.reserve(tab.capacity() * 2); //powiekszamy pojemnosc x2 == 400
	
	tab.reverse(); //odwracamy kolejność elementów
	
	tab.print_to_cout();
	
	for(const int* ptr = tab.get_head_ptr(); ptr != tab.get_tail_ptr(); ++ptr)
		std::cout << *ptr << "\n";
	
	//ekstra
	tab.sort(); //własny algorytm (jakikolwiek)
	
	tab.print_to_cout();
	
	tab.resize(0);

	std::cout << "Rozmiar: " << tab.capacity() << "\n"; //pojemność == 0
	std::cout << "Liczba elementow: " << tab.size() << "\n"; //rozmiar == 0
	

}
