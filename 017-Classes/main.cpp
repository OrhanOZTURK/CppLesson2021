#include <iostream>

using namespace std;


//.hpp

class Myclass{
private:
    int mx[5]{};

public:
    Myclass(){
        cout << "Myclass default ctor ... this : " << this << endl;
    }

    ~Myclass(){
       cout << "Myclass default dtor ... this : " << this << endl;
    }
};

//.cpp

void func(Myclass r){

}


int main()
{
    cout << "main basliyor\n";

    Myclass m;

    //copy ctor cagrılıyor
    //ileriki derlerde cevabımızı alacaz
    for (int i = 0; i < 10; ++i ) {
        func(m);
    }

    cout << "main sona eriyor\n";

    return 0;
}

/*********************************************/
/*********************************************/

