#include <iostream>
#include "utility.hpp"

using namespace std;


template<typename T>
class Myclass{
  //
};

template<typename A, typename B = const Myclass<A &>>
class Orhn{
public:
    Orhn()
    {
        cout << typeid (*this).name()<< "\n";
    }
};

int main()
{
    //Orhn<int, double> x;
    Orhn<long> y;
}

/***************************************************/
/***************************************************/










