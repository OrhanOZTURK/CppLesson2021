#include <iostream>
using namespace std;

//default fonsiyon

//fonksiyonlara cagrı yapma yöntemleri

void f1(T x); // call by value -- degeri kopyalama
void f2(T *r); // set fonksiyon -- nesnenin adresi
void f3(const T *p); // get fonk -- nesnenın sadece okunması


void f22(T &r); // call by referans
void f33(const T &r); //


T *f4(); // adresi döndürür
T &f44(); // referans döndürür

const T *f5(); // adresi döndürür ama salt okuma
const T &f55(); // referans döndürür ama salt okuma

int main()
{


    return 0;
}

/******************************************************/
/******************************************************/







