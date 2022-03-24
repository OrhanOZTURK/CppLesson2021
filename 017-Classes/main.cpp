#include <iostream>
#include "date.hpp"

using namespace std;

//test kodu
int main()
{
    Date mydate; //1.1.1900
    Date t1 = {12, 3, 1987};
    //Date t2 = {"05.04.1983"};  //explicit yapılır ise bu sentaks hatsına duser
    //şimdi gecerli explicit olsada
    Date t2{"05.04.1983"};

    Date t3{15000000};

    t2.set_month_day(22);
    cout << mydate.get_year_day();

    cout << t1 + 145 << "\n";
}



/***************************************************/
/***************************************************/








