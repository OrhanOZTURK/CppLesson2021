#include <iostream>

using namespace std;

class Myclass{
public:

};


bool operator<(const Myclass &a, const Myclass &b)
{
    cout << "global operator\n";
    cout << "&a  :  " << &a << "\n";
    cout << "&b =  " << &b << "\n";

    return true;
}

int main()
{

    Myclass mx, my;

    cout << "&mx : " << &mx << "\n";
    cout << "&my : " << &my << "\n";

    bool b = mx < my;

    cout << "b = " << b << "\n";



    return 0;
}



/***************************************************/
/***************************************************/




