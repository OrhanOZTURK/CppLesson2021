#include <iostream>
#include "point.hpp"
#include <memory>

using namespace std;

int main()
{
    unique_ptr<Point> p{new Point(1, 2, 3)};
    p->print();
    p->set(2, 3 , 5);
    p->print();

   // auto p2 = p; // copy ctor delete edilmiş

    auto p4 = move(p); // artık kaynagını p4 verildi p nin

    p4->print();

    return 0;
}



/***************************************************/
/***************************************************/




