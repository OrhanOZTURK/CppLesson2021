#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>

//polimorfik bir sınıf  virtual func olustu
class Car{
public:
    virtual void start()
    {
        std::cout << "Car has started\n";
    }

    virtual void run()
    {
        std::cout << "Car is running\n";
    }

    virtual void stop()
    {
        std::cout << "Car has stopped\n";
    }
};

class Mercedes : public Car{
public:
    void start()
    {
        std::cout << "Mercedes has started\n";
    }

    void run()
    {
        std::cout << "Mercedes is running\n";
    }

    void stop()
    {
        std::cout << "Mercedes has stopped\n";
    }
};

class Audi : public Car{
public:
    void start()
    {
        std::cout << "Audi has started\n";
    }

    void run()
    {
        std::cout << "Audi is running\n";
    }

    void stop()
    {
        std::cout << "Audi has stopped\n";
    }
};




class Fiat : public Car{
public:
    void start()
    {
        std::cout << "Fiat has started\n";
    }

    void run()
    {
        std::cout << "Fiat is running\n";
    }

    void stop()
    {
        std::cout << "Fiat has stopped\n";
    }
};



class Tofas : public Car{
public:
    void start()
    {
        std::cout << "Tofas has started\n";
    }

    void run()
    {
        std::cout << "Tofas is running\n";
    }

    void stop()
    {
        std::cout << "Tofas has stopped\n";
    }
};

#endif // CAR_HPP
