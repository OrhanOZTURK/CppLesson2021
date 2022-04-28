#include "car.hpp"
#include <cstdlib>
#include <cctype>
#include <conio.h>

using namespace std;

class Base{
public:
    virtual void vfunc()
    {
        cout << "Base vfunc\n";
    }

    ~Base()
    {
        cout << "Base nesnesinin geri veriyor\n";
    }
};

class Der : public Base
{
public:
    Der()
    {
        cout << "Der kaynak alindi\n";
    }

    ~Der()
    {
        cout << "Der kaynak verildi\n";
    }
};


int main()
{
    Base *p =  new Der;

    delete  p;
    //dikkatli ol kaynak sızındtısı var
}

/***************************************************/
/***************************************************/










