#include <iostream>

using namespace std;

//soru

//hpp
class Myclass{
public:
    Myclass()
    {
        cout << "Myclass default ctor this : " << this << "\n";
    }

    Myclass(int x)
    {
        cout << "Myclass int ctor this : " << this << "\n";
    }

    ~Myclass()
    {
        cout << "Myclass dtor this : " << this << "\n";
    }

    Myclass(const Myclass &other)
    {
        cout << "Myclass copy ctor this : " << this << "\n";
    }

    void set1(int x)
    {
        //
    }

    void set2(int x)
    {
        //
    }
};

//RVO => return value optimization
//C++11 ile mandatory copy elision

//NRVO => named return value optimization
//yazacagımız bir cok fonksiyon bu kategoriye giriyor
//C++17 ile mandatory copy elision

Myclass foo()
{
    cout << "foo agrildi\n";
    Myclass m;

    cout << "foo devam ediyor\n";
    m.set1(22);
    m.set2(33);

    cout << "foo sona eriyor\n";

    return m;
}

int main()
{
    cout << "Main basladi\n";

    Myclass mx = foo();

    cout << "Main devam ediyor\n";


    return 0;
}

/*********************************************/
/*********************************************/
