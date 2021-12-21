#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Ödev Soru
// Neden iki durum içinde geçerli

int main()
{
   const double *dptr = nullptr;

   //char *p = const_cast<char *>(dptr); // dogru degıl

   //char *p = reinterpret_cast<char *>(dptr); // dogru degıl


   char *p = const_cast<char *>(reinterpret_cast<const char *>(dptr));


   char *c = reinterpret_cast<char *>(const_cast<double *>(dptr));


   return 0;
}

/**********************************************/
/**********************************************/



