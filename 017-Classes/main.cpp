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


int main()
{
    set_terminate(&myabort);
    foo();
}

/***************************************************/
/***************************************************/










