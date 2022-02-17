#include <iostream>

using namespace std;

//soru 3

//hpp
class Myclass{
private:
    static int mx;

public:
    static void func(int);

};


//cpp

int main()
{
    Myclass m;

    //m.func(11); //programcı boyle cagırd statıc oldugun bilmeden
    //sentaks hatası degil
    //ama cagrının m ile lakası yok

    Myclass::func(11); //bunla alakası yok yukarıdakı cagırını

    //iki turlude cagrılabılır
    //nesnee ile cagırmak sadece bir namelookup amacı ile kullanılır
    //sentaks hatası yok


    return 0;
}

/*********************************************/
/*********************************************/
