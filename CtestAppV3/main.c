#include <stdio.h>

const int x = 10;

int y = x;


int main()
{
    // aynı anlamda
    auto int x;
    int y;


    // C de bu gerli
    // C99 eklenmiştir
    for(int i = 0; i < 5; ++i)
    {
        //int i;
        // Derleyici süslü prantezlere kendisi arka tarafta alıyor.
        {
          int i;
        }
    }

    const int z;
    const int w = 10;


    // C const expression
    // 1- global degişkenleri baslatan ifadeler constant olmak durumunda
    // 2- dizi boyutunu temsil eden ifadeler (hariç - variable lenght array)
    // 3- case const expression olmak durumunda
    // 4- structer alan  -->> elemanların kaç bits soyleyen ifadeler
    // 5- dizilere ilk degeri veren ifadeler const olmak durumunda

    const int size = 100;
    int A[size];

    int a = 5;
    int t = 10;
    const int b = 4;

    switch (a) {
        case t: break;
    }

    struct Data {
        int y : 4;
        int z : b;
    };



    return 0;
}
