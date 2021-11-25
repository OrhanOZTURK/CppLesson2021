#include <iostream>

using namespace std;

int main()
{
    //modern C++ dile eklendi, C ve eski C++ da yok
    //nullptr C++11 ile dile eklendi

    /*
     * Önecelikle hatırlamamız gereken C dekı NULL
     *
     * NULL macro dur anahtar sözcük deildir
     *
     * NULL kullanabilmeniz için  stdlib ve benzeri kütüphaneler imnclude etmeniz lazım
     *
     */


     /*
      *  C derleyicileri NULL define soyle edilmiştir
      *
      *  #define NULL ((void *)0) olarak define edilmiştir
      */

      // C de kullanılan 2 tane NULL olayı

    /*
     int *ptr = NULL;
     int *p = 0;
     */
     /******************************************/

     //otomatik (implicit) pointer conversion

     /*
      * 1- array to pointer conversion C ve C++
      * 2- function to pointer conversion
      * 3- NULL pointer conversion
      */

      // bir dizinin ismini birde kullanılması
      // derleyici dizinini isminin dizinini ilk ögesiinin adresine donusturme işlemi

     //int A[] = {1,2,3};

      //func();

      //int *ptr = func;


    int *ptr = 0;
    // int *ptr = NULL

    //C++ NULL macrosu kullanılması istenilmiyor
    //int *ptr = 0 --> NULL 'a donusmesını engellemek için
    // dile nullptr eklendır (constant)
    // nullptr aslında bir türü -->
    // nullptr_t türüdür. #include <cstddef> tanımlanmıstır


    //nullptr bir adres --> NULL macrosu gibi bir adrestir
    //semantik karsılıgı  C dekiyle aynı
    //Yani pointer degıskenın degerı nullptr ise hic bir yeri gostermemektedir.


    // nullptr sadece pointer deıskenlere atanabilir.

    int *ip = nullptr;
    double *dp = nullptr;

    //int x = nullptr sentaks hatası

    //guvenlıgın onune gecmıs oluyoruz

    //bool türlerine atama eski C++ ve C degecerlıydı
    //fakat nullptr ile gecerli degil.

    bool flag;
    flag = 0;
    flag = NULL;
    flag = nullptr;

    void func(int, nullptr_t);


    return 0;
}
