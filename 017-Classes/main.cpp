#include "car.hpp"
#include <cstdlib>
#include <cctype>
#include <conio.h>

using namespace std;

Car *create_random_car()
{
    switch (rand() % 4) {
    case 0: cout << "Mercedes...\n"; return new Mercedes;
    case 1: cout << "Audi...\n"; return new Audi;
    case 2: cout << "Fiat...\n"; return new Fiat;
    case 3: cout << "Tofas...\n"; return new Tofas;
    }

    return nullptr;
}


void car_game(Car *ptr)
{
    ptr->start();
    ptr->run();
    ptr->stop();
}

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    for(;;){
        car_game(create_random_car());
        _getch();
    }

}

/***************************************************/
/***************************************************/










