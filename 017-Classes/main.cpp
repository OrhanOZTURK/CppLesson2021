#include <iostream>

using namespace std;

//.hpp
class Myclass{
public:
    void func();

private:
    int mx, my;
};

struct Data{
    int x;
};

Myclass gm;

void Myclass::func(){
    this = &gm; // sentaks hatası
    //this R value expr dir
    //this pointer kendisi const dur bu yüzden gecersizdir
}

int main()
{


    return 0;
}

/*********************************************/
/*********************************************/

