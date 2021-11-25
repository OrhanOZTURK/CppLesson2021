#include <stdio.h>


/*
 * Declaration - implicit
 * C++ invalid
 * C89 valid - C99/11 invalid
 */

fuu(int number) {};


/* old style function definition
 * C++ invalid
 * C89 valid - C99/11 invalid, but compatibility with the pass
 */

 func(x, y, z)
 float x, y;
 {

 }


int main()
{
    /*
     * Declaration - implicit
     * C++ invalid
     * C89 valid - C99/11 invalid
     */

    foo();
    //int foo();


    /*
     *implicit int
     * C++ invalid
     * C89 valid - C99/11 invalid, but compatibility with the pass
     */

     const a = 4;
     static b = 7;


    return 0;
}
