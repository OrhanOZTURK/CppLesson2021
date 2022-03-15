#include "mint.hpp"
#include <ostream>
#include <istream>

std::ostream &operator<<(std::ostream &os, const Mint val)
{
    return os << "[" << val.mval << "]";
}

std::istream &operator>>(std::istream &is, Mint &val)
{
    return is >> val.mval;
}

