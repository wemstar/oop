    //Tego pliku nie mozna modyfikowac!
    //Prosze napisac program ktorego wynik bedzie zgodnym z wyjsciem pokazanym na koncu pliku
    //Ponizej znajduje sie opis algorytmow fill_n i for_each oraz iteratora back_inserter, ktorych NIE nalezy implementowac
    //Nalezy napisac algorytm oop::find oraz kilka innych elementow.

    #include "lab.h" //"Moj lab.h" 73 line, 1300 znakow (bez komentarzy)
    #include <algorithm>
    #include <iterator>

    /*
    Opis funkcji z STL
    <---------------------------------------------------------------------------------->
    <---------------------------------------------------------------------------------->
    template < class OutputIterator, class Size, class T >
      void fill_n ( OutputIterator first, Size n, const T& value );

    Fill sequence with value
    Sets value to the first n elements in the sequence pointed by first.

    Parameters

    first
        Output iterators to the initial positions in a sequence of at least n elements.
    n
        Number of elements to set value to.
        Its type is an integral type or some other type convertible to it.
    value
        Value to be used to fill the range.
    <---------------------------------------------------------------------------------->
    <---------------------------------------------------------------------------------->
    template <class Container>
      back_insert_iterator<Container> back_inserter (Container& x);

    Construct a back insert iterator
    This function generates a back insert iterator for a container.

    A back insert iterator is a special type of output iterator specifically designed
    to allow algorithms that usually overwrite elements (such as copy) to instead insert
    new elements at the end of the container.

    Parameters

    x
        Container for which the back insert iterator is constructed.
    <---------------------------------------------------------------------------------->
    <---------------------------------------------------------------------------------->
    template <class InputIterator, class Function>
       Function for_each (InputIterator first, InputIterator last, Function f);

    Apply function to range
    Applies function f to each of the elements in the range [first,last).

    Parameters

    first, last
        Input iterators to the initial and final positions in a sequence. The range used
    is [first,last), which contains all the elements between first and last, including
    the element pointed by first but not the element pointed by last.
    f
        Unary function taking an element in the range as argument. This can either be
    a pointer to a function or an object whose class overloads operator().
        Its return value, if any, is ignored.
    <---------------------------------------------------------------------------------->
    <---------------------------------------------------------------------------------->
    */

    int main()
    {
      typedef std::pair<std::string, double> el_type;
      {
        typedef std::vector<el_type> container_type;
        container_type v;

        std::fill_n(std::back_inserter(v), 10, el_type()); //wstawia 10 elentów a wartości el_type()
        std::for_each(v.begin(), v.end(), set_value("Value", 3.14)); //modyfikuje elementy w kontenerze

        std::cout << stl_print_fn(v.begin(), v.end(), " | ") << "\n";

        container_type::const_iterator pos = oop::find(v.begin(), v.end(), el_type("Value", 7.14));
        std::cout << "oop::find result:\t" << (pos != v.end() ? *pos : el_type("not found", 0))  << "\n";
      }
      {
        typedef std::list<el_type> container_type;
        container_type v;

        std::fill_n(std::back_inserter(v), 10, el_type()); //wstawia 10 elentów a wartości el_type()
        std::for_each(v.begin(), v.end(), set_value("Value", 3.14)); //modyfikuje elementy w kontenerze

        std::cout << stl_print_fn(v.begin(), v.end(), " | ") << "\n";

        container_type::const_iterator pos = oop::find(v.begin(), v.end(), el_type("Value", 14.14));
        std::cout << "oop::find result:\t" << (pos != v.end() ? *pos : el_type("not found", 0))  << "\n";
      }
    }
    /* Wynik dzialania:
    [Value, 3.14] | [Value, 4.14] | [Value, 5.14] | [Value, 6.14] | [Value, 7.14] | [Value, 8.14] | [Value, 9.14] | [Value, 10.14] | [Value, 11.14] | [Value, 12.14]
    oop::find result:       [Value, 3.14]
    [Value, 13.14] | [Value, 14.14] | [Value, 15.14] | [Value, 16.14] | [Value, 17.14] | [Value, 18.14] | [Value, 19.14] | [Value, 20.14] | [Value, 21.14] | [Value, 22.14]
    oop::find result:       [not found, 0]
    */
