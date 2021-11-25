#include <stdio.h>
#include <stdbool.h>

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
    //_Bool type added in C99
    //stdbool.h librarry included bool type, but bool is a Macro and true --> 1, false --> 0

    _Bool boolFlag = true;
    //_Bool boolFlag = false;

    /*
     * Character constants
     * C de karatar constants 'ları int türü
     * C++ da karakter constans 'ları char türü dür.
     */

     printf("%zu\n", sizeof('A'));


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
