#include <iostream>

using namespace std;

int main()
{
    constexpr int y = 20;

    decltype (y) x = 12; // x in türü int,  constexpr bir tür değildir
                         // constexpr int
    x = 12; // sentaks hatası

    return 0;
}


/****************************************/
/****************************************/




