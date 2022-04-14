#include <iostream>
#include <initializer_list>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;


void display_string(const string &s)
{
    cout << "[" << s.length() << "] (" << s << ")\n";
}


int main()
{
    string str{"kazimnazimehmet"};

    //str.end -1 işlemine takabul eder
    auto iter = str.erase(next(str.begin(), 2));

    display_string(str);
}


/***************************************************/
/***************************************************/










