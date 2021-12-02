#include <iostream>

using namespace std;

//ikisi iiçnde gecerli
//void func(const int &r);


// x kbul edılır y edılmez const oldugu ıcın
void func(int r); // r = 10

void func(int &r); // r --> x

int main()
{
   int x = 10;
   const int y = 15;

   func(x);
   //func(y);


    return 0;
}

/************************************************/
/************************************************/


