/*
 * main.cpp
 *
 *  Created on: 03-01-2013
 *      Author: wemstar
 */




//tego pliku nie wolno modyfikować
//
#include "lab.h"

int main(int argc, char** argv)
{
  try
  {
    FileHandler h(argc, argv);
    std::string s;
    double d;

    for(unsigned i = 0; i < h[argv[1]].no_of_lines(); ++i)
    {
      unsigned col_no = h[argv[1]][i].no_of_cols(); //pola separowane są znakami " \t"
      std::cout
        << (s = h[argv[i%(argc-1)+1]][i][i%col_no].as<std::string>()) << "\t"  // pobieramy z pliku o nazwie argv[1] 'i-tą' linie a z niej 'i%col_no'-te pole i wypisujemy jako std::string
        << (d = h[argv[i%(argc-1)+1]][i][i%col_no].as<double>())      << "\n"; // pobieramy z pliku o nazwie argv[1] 'i-tą' linie a z niej 'i%col_no'-te pole i wypisujemy jako double
    }
  }
  catch(std::exception& e)
  {
    std::cerr << e.what() << "\n";
  }
}
