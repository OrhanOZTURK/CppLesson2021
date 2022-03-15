#include <iostream>
#include "mint.hpp"

using namespace std;


class Array{
public:
    Array(size_t size, int val = 0);
    ~Array();
    Array(const Array &) = delete;
    Array &operator=(const Array &) = delete;

    int &operator[](size_t idx);

    size_t size()const{return msize;}

    //inserter dunctions
    friend std::ostream& operator<<(std::ostream &os, const Array &a);

private:
    size_t msize;
    int *mpa;

};

Array::Array(size_t size, int val) : msize{size}, mpa{new int[msize]}
{
    for(size_t i = 0; i < msize; ++i)
        mpa[i] = val;
}

Array::~Array()
{
    delete []mpa;
}

int &Array::operator[](size_t idx)
{
    return mpa[idx];
}

std::ostream& operator<<(std::ostream &os, const Array &a)
{
    os << "[";
    for (size_t i = 0; i < a.msize - 1; ++i) {
        os << a.mpa[i] << ", ";
    }

    os << a.mpa[a.msize - 1] << "]";

    return os;
}

int main()
{          

    Array a{10};

    cout << a << "\n";

    for(size_t i = 0; i < a.size(); ++i)
        a[i] = i; //Lvalue

    cout << a << "\n";


    return 0;
}


/***************************************************/
/***************************************************/






