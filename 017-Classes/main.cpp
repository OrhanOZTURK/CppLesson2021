#include <iostream>
#include <string>

using namespace std;

void display_string(const string &s)
{
    cout << "[" << s.length() << "] (" << s << ")\n";
}


int main()
{
    char str[] = {"0123456789"};

    string s1(str+2, 5);
    string s2{str + 2, str+5};

    display_string(s1);
    display_string(s2);

}



/***************************************************/
/***************************************************/








