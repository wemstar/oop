    #include <iostream>
    #include <cxxabi.h>

    #include "smart_ptr.h" //80 linii i 1255 znakĂłw (bez dokumentacji)

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

    int main(int argc, char * argv[])
    {
      int i = 0;
      {
        typedef int type;
        typedef SmartPtr<type, NoCopy<type> > ptr_no_type;
        typedef SmartPtr<type, RefCounted<type> > ptr_ref_type;
        typedef SmartPtr<type> ptr_ref_type2;

        ptr_no_type ptrNo(new type(++i));
              ptr_ref_type ptrRef(new type (++i));

        ptr_ref_type p2 = ptrRef;
        ptr_ref_type2 p3 = p2;
        p3 = ptrRef;
        ptr_ref_type p4 = p3;

      #ifdef COMPILE_ERROR
        ptr_no_type p1 = ptrNo;
      #endif
        std::cout << tool::rtti_real_name(typeid(ptrNo).name()) << ": " << *ptrNo << "\n"
                  << tool::rtti_real_name(typeid(p4).name()) << ": " << *p4 << "\n";
      }

      {
        typedef double type;
        typedef SmartPtr<type, NoCopy<type> > ptr_no_type;
        typedef SmartPtr<type, RefCounted<type> > ptr_ref_type;
        typedef SmartPtr<type> ptr_ref_type2;

        ptr_no_type ptrNo(new type(++i));
              ptr_ref_type ptrRef(new type (++i));

        ptr_ref_type p2 = ptrRef;
        ptr_ref_type2 p3 = p2;
        p3 = ptrRef;
        ptr_ref_type p4 = p3;

      #ifdef COMPILE_ERROR
        ptr_no_type p1 = ptrNo;
      #endif
        std::cout << tool::rtti_real_name(typeid(ptrNo).name()) << ": " << *ptrNo << "\n"
                  << tool::rtti_real_name(typeid(p4).name()) << ": " << *p4 << "\n";
      }
    }

    /*Wynik dziĹania
    SmartPtr<int, NoCopy<int> >: 1
    SmartPtr<int, RefCounted<int> >: 2
    SmartPtr<double, NoCopy<double> >: 3
    SmartPtr<double, RefCounted<double> >: 4
    */
