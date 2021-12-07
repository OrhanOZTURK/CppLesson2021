#include <iostream>

using namespace std;

int *func()
{
    int x = 10;
    //
    return &x;
}

int &foo()
{
    int x = 10;

    return x;
}

int main()
{
    func();
    foo();
    return 0;
}
