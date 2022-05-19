#include "utility.hpp"
#include <iostream>

void myabort()
{
    std::cout << "std::terminate cagrildi\n";
    std::cout << "myabort cagrildi\n";
    std::cout << "std::abort cagrildi\n";
    abort();
}
