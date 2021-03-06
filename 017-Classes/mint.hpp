#ifndef MINT_HPP
#define MINT_HPP

#include <iosfwd>
#include <stdexcept>

class BadMintDivision : public std::runtime_error{
public:
    BadMintDivision() : std::runtime_error{"Bad Mint Division hatasi"}{}
    const char *what()const override{
        return "Bad Mint Divided by Zero";
    }
};

class Mint
{
public:
    Mint() = default;
    explicit Mint(int val) : mval{val}{}

    Mint &operator++()  //predix Lvalue
    {
        ++mval;
        return *this;
    }

    Mint operator++(int)  //postfix PRvalue
    {
        Mint retval{*this};
        ++*this;
        return retval;
    }

    Mint &operator--()  //predix Lvalue
    {
        --mval;
        return *this;
    }

    Mint operator--(int)  //postfix PRvalue
    {
        Mint retval{*this};
        --*this;
        return retval;
    }

    Mint operator+()const
    {
        return *this;
    }

    Mint operator-()const
    {
        return Mint{-mval};
    }

    Mint& operator+=(Mint other)
    {
        mval += other.mval;

        return *this;
    }

    //Lvalue -- Rvalue
    /*
    Mint operator+(Mint other)
    {
        //tmp.mval = this->mval + other.mval;
        Mint tmp = (*this);
        return tmp += other;
    }
    */

    Mint& operator-=(Mint other)
    {
        mval -= other.mval;

        return *this;
    }

    Mint& operator*=(Mint other)
    {
        mval *= other.mval;

        return *this;
    }

    Mint& operator/=(Mint other)
    {
        mval /= other.mval;

        return *this;
    }

    friend bool operator<(const Mint &x, const Mint &y)
    {
        return x.mval < y.mval;
    }

    /*
    bool operator>(const Mint &y)
    {
        return this->mval > y.mval;
    }

    bool operator>=(const Mint &y)
    {
        return this->mval >= y.mval;
    }
    */


    friend bool operator==(const Mint &x, const Mint &y)
    {
        return x.mval == y.mval;
    }

    explicit operator bool()const
    {
        return mval != 0;
    }

    friend std::ostream &operator<<(std::ostream &os, const Mint val);
    friend std::istream &operator>>(std::istream &is, Mint &val);


private:
        int mval{};
};


inline bool operator>(const Mint &x, const Mint &y)
{
    return y < x;
}

inline bool operator>=(const Mint &x, const Mint &y)
{
    return !(x < y);
}

inline bool operator<=(const Mint &x, const Mint &y)
{
    return !(y < x);
}

inline bool operator!=(const Mint &x, const Mint &y)
{
    return !(x == y);
}

inline Mint operator+(Mint x, Mint y)
{
    return x += y;
}

inline Mint operator-(Mint x, Mint y)
{
    return x -= y;
}

inline Mint operator*(Mint x, Mint y)
{
    return x *= y;
}

inline Mint operator/(Mint x, Mint y)
{
    if(Mint{0} == y)
        throw BadMintDivision{};

    return x /= y;
}


#endif // MINT_HPP
