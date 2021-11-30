#include <iostream>

using namespace std;

int main()
{
    /* Referans değişkenlerinin oluşturulması*/

    // Referans değişkenlerini ilk deger vermenden olusturamayız mumkun degil

    //int &r; // sentaks hatası

    // Bir referansa bir değişken atandıktan sonra baska bir değişken temsil edilemez

    /*
    int x = 10;
    int y = 7;

    int &r = x;

    r = y; // x = y --> X in degeri 7 olmus oluyor

    //Aslında referanslar kendileri const * dır

    int *const p =  &x;  // üst seviyede bu işlem gercekleşir
    // p const pointer
    //p = &y; // gecersiz
    */

    // r kendi scope içinde her yerde x i temsil etmiş olur

    /*
    int x = 10;
    int &r = x;
    */
    /***************************************************/

    /*
     * C de bu konuyu bilmemiz gerekiyor
     *
     * L value expression
     * R value expression
     *
     */

    /*
     a // L value expression
     10 // R value expression

     a + 10 // R value expression

     a[4] // L value
    */

     /*
      * Eğer benm bir ifadenin R value veya L value oldugunu kestiremiyorsam
      *
      * o ifadenin başına & koyar isek ve hata vermezse sistem L value
      *
      * hata verir ise R value
      *
      */

    /*
      int a;
      &a;
     */
      //&10;
      //&(a + 5);

    /***************************************************/

    /*
     * Eğer referanslara atanan deger sag taraf degeri ise
     * const ise sentaks hatası
     *
     */

    /*
      int &r = 10; // sentaks hatası
    */


    //Soru olurmuydu

    /*
      int x = 5;
      int *ptr = &x;

      int &r = *ptr;  // r -- x degişkenini temsil eder
     */



    /************************************************/


    /*
     // Butun referanslar x temsil eder
      int x = 10;
      int &r1 = x;
      int &r2(x);
      int &r3{x};

      ++r1;
      ++r2;
      ++r3;

     cout << "x : " << x << "\n"; // x = 13
     */

     /****************************************/

       /*Ornek

       int x = 10;

       int &r = x;

       int *p = &r;

       r = 20;  // x = 20
       ++*p; // x = 21
        */



    /******************************************/

    // bir pointera referans olabilir mi ? EVET

    /*
    int x = 10;
    int y = 20;

    int *p{&x};
    int * &rp = p; // int * tur belirtir ve pointer p türü saklanır rp de


    rp = &y; // bu atamada p ye yani y nin adresi atanır

    *rp = 99;

    cout << "x : " << x << "\n";
    cout << "y : " << y << "\n";
    */

    /******************************************/

    //Diziye referans alalabilirmiyim ?

    /*
    int a[5] = {1, 2, 3, 4, 5};

    int (*p)[5] = &a; // a nın adresinin tutan pointer

    //C++ diziye referans
    int (&ra)[5] = a; // ra demek a demek

    for(int i = 0; i < 5; ++i)
    {
        cout << ra[i] << " ";
    }

    cout << endl;


    //İşte auto nun gücü işimizi kolaylaştırdı
    auto &raa = a;

    for(int i = 0; i < 5; ++i)
    {
        cout << raa[i] << " ";
    }
    cout << endl;
    */

    /********************************/

    // Tipik sentaks hatası
    // auto &x; // referanslara ilk deger vermek zorundayız
    // int &r;

   /**************************************/

    // expression ifade ler

    /* a
     * a + 5
     *
     * x*y + c -b < 2
     *
     */

    /*
     * her ifadenin bir türü
     * her ifadenin bir value category si var
     */

    /* value category 3 ayrılır */

    /*
     * L value (left value) : Nesne gösteren ifadeler - bu ifade nesneye karşılık gelir
     *
     * X Value (expiring value) : Bir kimliği yok ama bellekte bir nesneye karşılık gelir
     *
     * PR value (pure R value) : o ifadenin bir kimiliği (bellekte yeri) yok ve nesneye karşılık gelmez
     */

    // Bir ifade sadece bir kategoriye girebilir

    /*
     * GL Value : L value X value dan olusursa GL value
     *
     * R Value : X value ile PR value oluşturdugu kümeye R value denir.
     *           Yani bir ifade bunlardan ikisi ise R value expression dır
     *
     */

     /*
      * Değişken isimlerinin  olusturdugu ifadeler L value dur
      * içerik operatoru L value
      * Köşeli parantez operatoru L value
      */

      int A;
      A; // L value

      int *ptr = &A;

      *ptr; //L value

      int a[6]{};

      a[3]; // L value


      /*
       * Dikkat
       *
       * C ve C++ da L value R value ifadeleri farklılıkları var
       *
       * ++x ve --x opeatorleri
       * C de R value
       * C++ L value
       *
       *
       * virgül operatörü
       *
       * a, b --  C de R value C++ L value
       *
       *
       * x > 0 ? y: z; koşul operatoru C de R value C++ L value
       *
       * x++ x-- ifadeleri iki dilde R value
       *
       *
       */







    return 0;
}
