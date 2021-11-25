#include <iostream>

using namespace std;

//Differences in data types

//There is no bool type, including tranditional C(C89). But int type is used instead of bool type
//There is a _Bool type added to the language with C99. But generally not used int is used.


/*
 * C++ has a bool type
 * C++ has a bool keyword
 * C++ has a true constant
 * C++ has a false constant
 */

int main()
{


    /*
     * The type produced by comparison operators and logic operators in C is the int type, not the bool type.
     */
    if(15 > 20)
        ;


    /*
     * In C++ language, bool türü satandart olarak 1 byte'dır
     */
    //cout << "\n" << "size : " << sizeof(bool) << "\n\n\n";

    /*
     * Character constants
     * C de karatar constants 'ları int türü
     * C++ da karakter constans 'ları char türü dür.
     */

     //printf("%zu\n", sizeof('A'));

     /*
      * C de bu gecerli degildir
      * C++ otomatik conversion from int to bool
      * C++ otomatik conversion from bool to int type
      *
      */

    /*
     int x = 5;

     bool flag = x; // int type  false yada true convert
     cout << "flag : " << flag << "\n";
     //Odev

     int y;
     y = flag;
     cout << "y: " << y << "\n";
     */

     /*
      *Önemli pointer'lar conversion to bool type
      *
      * eger adress degeri null 'ı göstermiyorsa bool türü true
      * eger adres degeri null ise bool türü false
      *
      */

     int x; //--> 0x0fffb
     int *ptr = nullptr; //--> 0x0fff
     bool flagPtr = ptr;
     cout << "flagptr: " << flagPtr << "\n";

     /*
      * String literals
      *
      * C++ string literals --> const char *
      * C string literals --> char *
      *
      */

      const char *pStr =  "orhan";


    return 0;
}
