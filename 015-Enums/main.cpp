#include <iostream>

using namespace std;

enum class Color : int{White, Black, Green};

int main()
{
   const char *const p[] = {"White", "Black", "Green"};

   //p[Color::Black]; // sentaks int e dönüşüm

   p[static_cast<int>(Color::Black)]; //

    return 0;
}

/*****************************************/
/*****************************************/


