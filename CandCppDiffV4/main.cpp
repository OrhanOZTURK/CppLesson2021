#include <iostream>

using namespace std;

//User define type farklılıkları C++ ektra olarak Class'lar var
//Yapılar, Enum, Union

// C++ da struct yapısının ismi Data 'dır
// C de bu bildirimde Data bir tag olarak kullnılır.
// C de bos struct tanımlayamayız
// C++ bos struct tanımlayabiliriz

struct Data {
    int x;
    int y;
};

// Bu C++ da isim çakışmasına neden oldugundan sentaks hata
/*
typedef struct Orhan {
    int a;
    int b;
}Data;
*/

//C++ typdef bildirime gerek kalmamıstır
//C++ struct, Enum Union yapıları içinde gecerlidir.

//----------------------------//

//C++ isimleri dogrudan kullanabiliriz
// C de ise dogrudan kullanamayız

union Word{
    int x;
    char str[5];
};

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
struct Empty{

};


enum Color1 {Gray, Black};

int main()
{
    Data data;
    struct Data data1;

    Data myData;
    Word myWord;
    Color myColor;


    ///////

    char str[] = "orhan";// dizinin boyuru eşitlene degerin uzunlugunun  + 1 fazlası
    //"orhan\0"
    //Eger dizinin boyutunu verirsek
    //Dizinin belirtilen boyutu kucuk olmaz verieln string den C++'da
    //

    //char str2[4] = "Orhan";




    //Sizden isteğim
    // undefined behavior (tanımsız davranıs oluyor)
    // defined behavior

    // implementation defined / implementation dependent
    // impl


    /****************************/
    //Enum türlere ilişkin önemli farklılık
    //C derleyicilerin enum turlerı int turü olarak ele alınır --> underline type
    //C++ ise eskiden beri enum turleri int olmak zorunda deildir
    // Kendisi secebilir

    //C++ da otomatik tür dönüşümü yok
    enum Color1 myColor1 = Black;
    myColor1 = 3;
    myColor1 = 3.4;


    // Farklı enum türleri C++ bir birine otomatik tür dönüşümü saglamaz
    enum Pos myPos = Off;
    myColor1 = myPos;


    //Fakat enumlardan diger türlere otomatik tür dönüşümü mevcuttur
    int ival = myColor1;


    // Türlere ilişkin farklılıklar

    // C de legal, fakat c derleyicileri buna uyarı verir
    // C de artimatik türlerle pointer türler arasında tür dönüşümü vardır
    // Fakat bu bizim istemeceğimiz bir durum
    // C++ da sentak hatası
    int x = 10;
    int *ptr = x;

    // Pointerlardan aritmatik türlere dönşüm C de gecerli
    // C++ da sentak hatası
    int y = ptr;

    // C de (double) x tur donusturme var iken
    // C++ da 4 adet tür dönşturme hayatımıza girmiştir

    /*
     *static_cast
     *const_cast
     *reinterpret_cast
     *dynamic_cast
     */


    // Farklı address turleri arasındaki dönüşüm kritik

    // 2 istinas dışında birbirine dönüştürme

    // double nesne  adresinin int nesne adresi olarak kullanamayız

    // istisna char* nesne adresi ve void * nesne adresi

    //C de yanlıs ama sentaks hatsı degildir
    //SAdece locik kontrole takilir.
    int y1 = 10;
    double *dPtr;

    dPtr = &y1;

    //T ve U turler olmak üzere
    //T* turunden U* turune dönüşüm yok

   // int *y2 = &y1;


   /* Const adress donusumlerine */

   // T*
   // const T*

   int z = 10;
   //&z  --> int  *  -> T*

   const int cz = 10;
   //&cz  --> const int *

   const int primes[] = {2, 3, 4, 5};
   //&primes[0]  --> const int *


   //C ile C++ arasındaki önemli farklılıklar string literal

   // "orhan"   --> char [6] C de   --- char *
   // "orhan"   --> const char [6] C++  --- const char *


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


   const int xy = 5;
   int *p1 = &xy;

   //Bunları hepsi sentak hatsıdır
   /*
    * syntax error
    * invalid code
    * ill-formed code
    * illegal code
    */


   // wrong code
   // yanlıs degil ama İşini yapamayan kod
      int xInt = 10;
      if(xInt = 10)
            ;

   // bad code
   // İşini yapan ama verimsiz kod

     const char *ptr3 = "Orhan";
     //*ptr3 = 'K';

    // void *  C++ da bolca kullancaz
    // void * istediğimiz türden atama yapabiliriz.

     int xxx = 10;
     unsigned long yyy = 12;
     float fVal = 5;
     char str4[] = "Orhan";

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
