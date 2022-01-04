#include <iostream>

using namespace std;

extern "C" int func(int x, int y);
extern "C" int func1(int x, int y);
extern "C" int func2(int x, int y);
extern "C" int func3(int x, int y);

//boyle yazabilirz

extern "C" {
     int func(int x, int y);
     int func1(int x, int y);
     int func2(int x, int y);
     int func3(int x, int y);
}

int main()
{
    auto a = func(4, 5);

    cout << "a : " << a << endl;

    return 0;
}

/***************************************/
/***************************************/
