#ifndef UTILITY_HPP
#define UTILITY_HPP

#include <iostream>

void myabort();

template<typename T, typename  U>
std::ostream & operator<<(std::ostream &os, const std::pair<T, U> &p)
{
    return os << "[" << p.first << ", " << p.second << "]" << "\n";
}

#endif // UTILITY_HPP
