#include <iostream>
#include <cstring>
#include <cstdlib>
#include <conio.h>

using namespace std;

//hpp
class MyString{
public:
    MyString(const char *pstr) : mlen{strlen(pstr)}
    {
        mp = static_cast<char *>(malloc(mlen + 1));
        if(!mp){
            cerr << "bellek yetersiz\n";
            exit(EXIT_FAILURE);
        }

        cout << "constructur this : " << this << "\n";
        cout << "the address of allocated block : " << (void *) mp << "\n";

        strcpy(mp, pstr);

     }

    ~MyString(){
        cout << "destructor this  : " << this << "\n";
        if(mp){
            free(mp);
        }
        cout << "the address of free block : " << (void *) mp << "\n";
    }


    //copy ctor --- deep
    MyString(const MyString &other) : mlen{other.mlen}
    {
        cout << "MyString copy ctor this : " << this << "\n";

        mp = static_cast<char *>(malloc(mlen + 1));
        if(!mp){
            cerr << "bellek yetersiz\n";
            exit(EXIT_FAILURE);
        }

        cout << "the address of allocated block : " << (void *) mp << "\n";
        cout << "other mp                       : " << (void *)other.mp << "\n";

        strcpy(mp, other.mp);
    }


    size_t length()const{
        return mlen;
    }

    void print()const{
        cout << "[" << mp << "]\n" << endl;
    }

private:
    size_t mlen;
    char *mp;
};


void func(MyString str)
{
    cout << "func cagrildi\n";
    str.print();
    cout << "func sona eriyor\n";
}

int main()
{
    MyString ms("Orhan OZTURK");
    std::cout << "length ::  " << ms.length() << "\n";
    ms.print();
    func(ms);
    _getch();

    //derleyici yazar ise shalow copy ctor
    //aynı veriyi kullan demek

    //burada yapmamız gerekn iki tane farklı yer olmaası gerekli
    //bu sebepten copy ctor bizim yazmamız lazım

    ms.print();



    return 0;
}

/*********************************************/
/*********************************************/





















