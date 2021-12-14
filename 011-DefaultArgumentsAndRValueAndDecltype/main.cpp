#include <iostream>

using namespace std;



int main()
{

    int x = 10;
    int *ptr = nullptr;

    decltype(*ptr) y = x; // kod gecerli int &
    //burası eger nullptr işleme almış olsaydı
    //tanımsız davranız


    return 0;
}


/*****************************************/
/*****************************************/




















