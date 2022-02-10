#include <iostream>
#include <cstring>
#include <cstdlib>
#include <conio.h>

using namespace std;

//hpp

class Myclass{
private:
   int mx = 0;

public:
    Myclass() : mx(0)
    {
        cout << "Myclass() this : " << this << "\n";
    }

    Myclass(int val) : mx{val}
    {
        cout << "Myclass(int val) val : "<< val << " this : " << this << "\n";
    }

    ~Myclass(){
        cout << "Myclass dtor this : " << this << "\n";
    }


};


void func(Myclass &&r) //Rvalue
{
    cout << "func Myclass && cagrildi\n";
}

void func(const Myclass &r) //Lvalue
{
    cout << "func const Myclass & cagrildi\n";
}

int main()
{
    cout << "Main basladı\n";

    Myclass m{2};

    func(m);

    cout << "Main devam ediyor\n";

    return 0;
}

/*********************************************/
/*********************************************/
