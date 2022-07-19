#include <iostream>
#include "utility.hpp"

using namespace std;

//std::pair basit interface yapısının gösterimi

template<typename T, typename U>
struct Pair{

    T first;
    U second;

    Pair() : first(), second(){};
    Pair(const T &t, const U &u) : first(t), second(u){};

};

template<typename T, typename U>
bool operator<(const Pair<T,U> &p1, const Pair<T,U> &p2)
{
    return p1.first < p2.first || !(p2.first < p1.first && p1.second < p2.second);
}

template<typename T, typename  U>
std::ostream & operator<<(std::ostream &os, const Pair<T, U> &p)
{
    return os << "(" << p.first << ", " << p.second << ")" << "\n";
}


int main()
{
    Pair<int, double> px{12, 4.2};
    Pair<string, string> py{"mehmet", "nazim"};


    cout << px << py << "\n";


}

/***************************************************/
/***************************************************/










