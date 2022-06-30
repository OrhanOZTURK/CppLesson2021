#include <iostream>
#include "utility.hpp"
#include <initializer_list>

using namespace std;

template<typename T, int val>
constexpr int asize(T (&)[val])
{
    return val;
}

int main()
{

    int a[] = {2, 5, 6, 7, 8, 4};

    int x = asize(a);

    cout << "x = " << x <<"\n";

    int b[asize(a)];

}

/***************************************************/
/***************************************************/










