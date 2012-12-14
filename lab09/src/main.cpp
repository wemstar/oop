    //tego pliku nie wolno modyfikować
    //napisać listę

    #include "lab.h"

    int main(int argc, char** argv)
    {
      try
      {
        {
          typedef list<Double_t> lista;
          lista v;

                for(int i = 0; i < 10; ++i)
                {
                        v.push_front(lista::value_type(200.1 + i)); //wstawia na poczatek
                        v.insert(v.begin(), lista::value_type(i));      //wstawia na pozycję
                        v.push_back(lista::value_type(1000.1 + i));  //wstawia na koniec
                }
          lista::iterator beg = v.begin(), end = v.end();
          printTo(beg, end, std::cout); //początke i koniec listy
        }
        {
          typedef list<Int_t> lista;
          lista v;

                for(int i = 0; i < 10; ++i)
                {
                        v.push_front(lista::value_type(200 + i)); //wstawia na poczatek
            v.insert(v.begin(), lista::value_type(i));      //wstawia na pozycję
                        v.push_back(lista::value_type(1000 + i));  //wstawia na koniec
                }
          lista::iterator beg = v.begin(), end = v.end();
          printTo(beg, end, std::cout); //początke i koniec listy
        }

      }
      CATCH_ALL_STANDARD_EXCEPTIONS
      {
        exception_handler::process(e); //wypisuje na cout to co niesie wyjątek
      }
    }
    /*Wynik dziłania
    9 209.1 8 208.1 7 207.1 6 206.1 5 205.1 4 204.1 3 203.1 2 202.1 1 201.1 0 200.1 1000.1 1001.1 1002.1 1003.1 1004.1 1005.1 1006.1 1007.1 1008.1 1009.1
    9 209 8 208 7 207 6 206 5 205 4 204 3 203 2 202 1 201 0 200 1000 1001 1002 1003 1004 1005 1006 1007 1008 1009
    */
