    #include "lab_main.h"

    int main(int argc, char* argv[])
    {

            static_array<int, 3> x;

            std::ifstream file;

            try{
                    set_params(file);

                    file.open(argv[1]);

                    while(true)
                    {
                    	std::cout<<argv[1]<<std::endl;
                            file >> x[0] >> skip(';') >> x[1] >> skip(';') >> x[2];
                            std::cout << x[0] << fill() << x[1] << fill('*', 30) << x[2] << std::endl;
                    }
            }
            catch(const std::exception& e)
            {       }


            try{
                    reset_params(file);

                    while(true)
                    {
                            file >> x[0] >> skip(';', false) >> x[1] >> skip(';', false) >> x[2];                   //false oznacza ze ';' nie moze sie powtarzac
                            std::cout << x[0] << fill(' ') << x[1] << fill('^', 10) << x[2] << std::endl;
                    }
            }
            catch(const std::exception& e)
            {       }

    }

    /* Przykladowy rezultat
    1___________________2*****************************3
    4___________________5*****************************6
    7___________________8*****************************9
    10__________________11****************************12
    13__________________14****************************15
    1                   2^^^^^^^^^3
    4                   5^^^^^^^^^6
    */
