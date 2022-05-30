#include <iostream>
#include "utility.hpp"
#include <stdexcept>
#include "car.hpp"
#include <memory>
#include <vector>

using namespace std;

void foo()
{
    cout << "foo cagrildi  ve foo hata nesnesini tekrar gonderiyor\n";
    throw;
}

void func()
{
    try {
        throw out_of_range{"out_of_range"};
    }  catch (std::exception &ex) {
        foo();
    }
}


int main()
{
    std::cout << "main baslsadiii...\n";

    try {
        func();
    }  catch (std::out_of_range &ex) {
        cout << "hata yakalandi... " << ex.what() << "\n";
    }
}

/***************************************************/
/***************************************************/










