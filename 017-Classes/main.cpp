#include <iostream>
#include "utility.hpp"
#include <stdexcept>
#include "car.hpp"
#include <memory>
#include <vector>

using namespace std;

void car_game(Car *p)
{
    p->start();
    p->run();

    //mercedes oldugun cam tavan acildsin
    Mercedes *ms = dynamic_cast<Mercedes *>(p); //işlem yapılmıyorsa nullptr
    if(ms){
        ms->open_sunroof();
    }
    p->stop();
}

int main()
{
    for (; ; ) {
        auto p = create_random_car();
        car_game(p);
        delete p;
        getchar();
    }
}

/***************************************************/
/***************************************************/










