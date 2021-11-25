#include <iostream>

using namespace std;

//compatibility with the pass

/*
 * implicit int
 *
 */

/*
 * Declaration - implicit
 * C++ invalid
 * C89 valid - C99/11 invalid
 */
//fuu(int number) {};


/* old style function definition
 * C++ invalid
 * C89 valid - C99/11 invalid, but compatibility with the pass
 */

 //func(x, y, z)

/*
 * In C++, func and fuu functions have no parameters.
 */
void func(); //C, it does not have any information about the parameters.
void fuu(void); //C, function have no parameters

int main()
{
    /*
     * Declaration - implicit
     * C++ invalid
     * C89 valid - C99/11 invalid
     */

    //foo();

    /*
     *implicit int
     * C++ invalid
     * C89 valid - C99/11 invalid, but compatibility with the pass
     */

    //const a = 4;
    //static b = 7;

    func();
    fuu();

    return 0;
}
