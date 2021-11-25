#include <stdio.h>


//User define type farklılıkları C++ ektra olarak Class'lar var
//Yapılar, Enum, Union

// C++ da struct yapısının ismi Data 'dır
// C de bu bildirimde Data bir tag olarak kullnılır.
struct Data {
    int x;
    int y;
};

/*
typedef struct Data1{

} Data;
*/

//C++ isimleri dogrudan kullanabiliriz
// C de ise dogrudan kullanamayız

union Word{
    int x;
    char str[5];
};

typedef union Word1{
    int x;
    char str[5];
}Word;

enum Color {
    White,
    Red,
    Yellow
};


enum Pos {
    Off,
    On
};


//----------------------------//

// C de bos struct tanımlayamayız
// C++ bos struct tanımlayabiliriz ve cokca kullanılır

/*struct Empty{

};
*/

int main()
{
    /*
    struct Data myData;
    //Data myData1;

    union Word myWord;
    enum Color myColor;

    Word myWord1;

    //Bu yapı C de gecerli, fakat dizinin sonuna '\0' larakter konulmaz
    char str2[4] = "Orhan";

    for(int i=0; str2[i] != '\0'; ++i)
    {
        putchar(str2[i]);
    }

    putchar('\n');
*/
    /****************************/

/*
    //Otomatik tür dünüşümü var
    enum Color myColor1 = Red;
    myColor1 = 3;
    myColor1 = 3.4;

    // Farklı enum türleri C de bir birine otomatik tür dönüşümü saglar
    enum Pos myPos = Off;
    myColor1 = myPos;

    //Fakat enumlardan diger türlere otomatik tür dönüşümü mevcuttur
    int ival = myColor1;


    // Türlere ilişkin farklılıklar

    // C de legal, fakat c derleyicileri buna uyarı verir
    int x = 10;
    int *ptr = x;

    // Pointerlardan aritmatik türlere dönşüm C de gecerli
    // C++ da sentak hatası
    int y = ptr;



    int y1 = 10;
    double *dPtr;

    dPtr = &y1;

    //Pointerlara gelirsek
    //const anahtar sözcüğünü böyle tanımlarsak

    int z2 = 10;
    int *p = &z2;
    const int *pp = &z2;
    int const *ppp = &z2;

    // T* ----> const T* türüne dönüştürebilirim C ve C++ için gecerli durum

    // Fakat const T* ---> T* türüne dönüşüm yoktur C++ fakat C de vardır.

    const int *pt = &z2;
    int *pt2 = pt;

    */

    char *ptr3 = "Orhan"; // const char *
    //const char *ptr3   -->
    //bu sayede grantiye almıs oltruz string literallerinin degiştirilemeyecegini
    *ptr3 = 'K'; //undefined behaviovar


    printf("%s\n", ptr3);


    // void *  C++ da bolca kullancaz
    // void * istediğimiz türden atama yapabiliriz.

     int xxx = 10;
     unsigned long yyy = 12;
     float fVal = 5;
     const char str4[] = "Orhan";

     void *vptr = &xxx;
     vptr = &yyy;
     vptr = &fVal;
     vptr = &str4[0];


     // void * --> T* donusumu C de gecerli fakat C++ da sentaks hatasıdır

     int yyy1 = 10;
     void *vptr1 = &yyy1;
     int *yyy2 = vptr1;

     size_t n;
     int *pd = (int *)malloc(n* sizeof (n));

    return 0;
}
