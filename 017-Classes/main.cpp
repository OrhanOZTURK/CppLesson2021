#include <iostream>
#include "utility.hpp"
#include <stdexcept>
#include "car.hpp"
#include <memory>
#include <vector>
#include "mint.hpp"

using namespace std;

std::ostream &operator<<(std::ostream &os, const Car &rcar)
{
    return rcar.print(os);
}


int main()
{
    while (true) {
        Car *p = create_random_car();
        cout << *p << "\n";
        delete p;
        std::cout << "\n\n";
        getchar();
    }

}

/***************************************************/
/***************************************************/










