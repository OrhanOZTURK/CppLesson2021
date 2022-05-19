#include <iostream>
#include "utility.hpp"
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;


void f4()
{
    cout << "f4 basladi\n";

    std::string str{"orhan"};

    str.at(30) = 'X'; //out of range

    cout << "f4 sona erdi\n";
}


void f3()
{
    cout << "f3 basladi\n";
    f4();
    cout << "f3 sona erdi\n";
}


void f2()
{
    cout << "f2 basladi\n";
    f3();
    cout << "f2 sona erdi\n";
}


void f1()
{
    cout << "f1 basladi\n";
    f2();
    cout << "f1 sona erdi\n";
}


int main()
{
    set_terminate(myabort);

    cout << "main baslad\n";

    try {
        f1();
    }  catch (std::exception &ex) { //kalıtım yapıası var
        cout << "hata yakalandi  = " << ex.what() << "\n";
    }

    cout << "main sona eriyor\n";
}

/***************************************************/
/***************************************************/










