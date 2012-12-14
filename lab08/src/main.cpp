//Tego pliku nie moĹźna modyfikowaĂŚ
//
//ProszÄ napisa program wykorzystujÄcy hierachiÄ z poprzednich zajÄÄ
//ProszÄ dopisaÄ obsĹugÄ bĹÄdĂłw tak jak poniĹźej podano
//ProszÄ deklarwaÄ funkcje odpowiednio pod wzglÄdem obsĹugi wyjÄtkĂłw
//
//Brak bĹÄdĂłw kompilacji przy zdefiniwanych COMPILE_ERROR1 rownieĹź dyskwalifikuje zadanie!!!
//
//Slope fit:
//a = sum_1_n(x_i * y_i)/sum_1_n(x_i^2)
//Fit liniowy: //opcjonalnie ale ma byÄ przewidziany
//http://www.statisticshowto.com/articles/how-to-find-a-linear-regression-equation/


#include "lab.h"

using namespace oop;

int main(int argc, char** argv)
{
  try
  {
          DataReader d(Array::size); // maksymalnie czyta 100 par jak wiÄcej to odpowiedni wyjÄtek
    d.read_data(std::cin); //read data from cin format x1; y1\nx2; y2\n...
                           //cin.eof() przdatne do wykrycia koĹca czytania (znaku koĹca pliku)

    Fitter f;
    f.set_fit_type(new SlopeFit);
    f.set_data(d.get());
    f.fit();

        f.get_result().print(std::cout);

    f.set_fit_type(new LinearFit);
    f.fit();
        f.get_result().print(std::cout);
  }
  CATCH_ALL_FIT_EXCEPTIONS // 1. zĹy format danych (1a brak do pary, 1b - zĹy format), 2. nie wystaraczjÄca liczba punktĂłw
  {
    Fit::ExceptionHandler::print(e); // wypisuje bĹÄd na cout
  }
  CATCH_ALL_STD_EXCEPTIONS //np. niemozliwosc zaalokowanie pamieci
  {
    Fit::ExceptionHandler::print(e); // wypisuje bĹÄd na cout
  }
  CATCH_REST
  {}

#ifdef COMPILE_ERROR1
        Fit f1;
#endif

        return 0;
}
