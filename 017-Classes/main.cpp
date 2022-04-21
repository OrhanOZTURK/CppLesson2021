#include <iostream>

class Base{
public:
    Base()
    {
        std::cout << "Base default ctor\n";
    }

    Base(int x)
    {
        std::cout << "Base x = " << x <<"\n";
    }

    Base(int x, int y)
    {
        std::cout << "Base x = " << x << " y = " << y << "\n";
    }
};

class Member{
public:
    Member(int)
    {
        std::cout << "Member int \n";
    }
};

class Der : public Base{
private:
    Member mx;

public:
    Der() : Base{12, 4}, mx{5}
    {
        std::cout << "Der default ctor\n";
    }
};


int main()
{
    Der myder;

}

/***************************************************/
/***************************************************/










