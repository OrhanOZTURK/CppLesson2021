#include <iostream>

using namespace std;

int x;
int a = 10;
int b = a;

int main()
{
    // c de otomatik ömürü ifade ediyordu
    // fakar kullanımdan düşmüstür --> depracated

    //Fakat C++ anlamı tamamiyle degişmiştir -> Type deduction
    auto x = 10;


    //C++ Error
    // C de gecerli
    for(int i = 0; i < 5; ++i)
    {
        //int i;
    }

    // Const keyword
    // C++ da const degişkene ilk deger vermek zorundayız.
    // C de bu zorunluluk yoktur.
    const int y = 7;

    // C++ const expression
    // 1- global degişkenler baslangıc degerleri verilen ifadelere sabit olması gerekmez.
    // 2- dizi boyutunu temsil eden ifadeler (hariç - variable lenght array)
    // 3- case const expression olmak durumunda
    // 4- structer alan  -->> elemanların kaç bits soyleyen ifadeler
    // 5- dizilere ilk degeri veren ifadeler const olmak durumunda

    const int size = 100;
    int A[10];

    int a = 5;
    const int b = 4;

    switch (a) {
        case b: break;
    }


    struct Data {
        int y : 4;
        int z : b;
    };

     // Linkage

    /*
         * Linkage
         *
         * In C
         *
         * static int x = 10; Can access it by internal link in C
         * int x = 10; // Can access it by external link in C
         * const int  x = 10; // Can access it by external link in C
         *
         *
         *
         * But In C++
         *
         * int x = 10; // Can access it by external link in C++
         * const int x = 10; //Can access it by internal link in C++
         * If we want to have both external and global const and external connections in C ++.
         *
         * extern const int x = 10;
         */

    return 0;
}
