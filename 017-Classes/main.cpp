#include <iostream>
#include "mint.hpp"
#include <memory>

using namespace std;

int main()
{
    //explicit oldugu iiçin copy init ile veremeyiz deger
    //unique_ptr<Mint> uptr = new Mint{1};

    unique_ptr<Mint> uptr;
    unique_ptr<Mint> uptr1{new Mint{1}};

    if(uptr)
        cout << "uptr dogru\n";
    else
        cout << "uptr yanlis\n";

    if(uptr1)
        cout << "uptr1 dogru\n";
    else
        cout << "uptr1 yanlis\n";

    Mint uptr2{3};
    int ival = (uptr2); // setaks hatası bool tür donusumu explixit oldugu için convert ederken sentaks hatsı olru

    return 0;
}


/***************************************************/
/***************************************************/









