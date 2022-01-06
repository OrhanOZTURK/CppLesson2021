#include <iostream>

using namespace std;


//.hpp
class Myclass{
public:
    //const overloading
    void func();
    void func()const;

private:
    int mx, my;
};

//.cpp
void Myclass::func(){
    cout << "Myclass::func()" << endl;
}

void Myclass::func() const{
    cout << "Myclass::func() const" << endl;
}


int main()
{
    Myclass m1;
    m1.func();

    //const Myclass m2;
    m2.func(); // const olan cagrılacaktı

    return 0;
}

/*********************************************/
/*********************************************/

