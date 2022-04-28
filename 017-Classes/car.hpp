#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>

class Car{
public:
    virtual Car *clone() = 0;

    void check()
    {
        start();
        run();
        stop();
    }

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
    Car *clone()override
    {
        return new Mercedes(*this); //copy ctor
    }

    void start() override
    {
        std::cout << "Mercedes has started\n";
    }

    void run() override
    {
        std::cout << "Mercedes is running\n";
    }

    void stop() override
    {
        std::cout << "Mercedes has stopped\n";
    }
};

class Audi : public Car{
public:

    Car *clone()override
    {
        return new Audi(*this); //copy ctor
    }

    void start() override
    {
        std::cout << "Audi has started\n";
    }


    void run() override
    {
        std::cout << "Audi is running\n";
    }

    void stop() override
    {
        std::cout << "Audi has stopped\n";
    }
};

class Audi8 : public Audi{
public:

    Car *clone()override
    {
        return new Audi8(*this); //copy ctor
    }


    void start() override
    {
        std::cout << "Audi8 has started\n";
    }


    void run() override
    {
        std::cout << "Audi8 is running\n";
    }

    void stop() override
    {
        std::cout << "Audi8 has stopped\n";
    }
};


class Fiat : public Car{
public:
    Car *clone()override
    {
        return new Fiat(*this); //copy ctor
    }

    void start() override
    {
        std::cout << "Fiat has started\n";
    }

    void run() override
    {
        std::cout << "Fiat is running\n";
    }

    void stop() override
    {
        std::cout << "Fiat has stopped\n";
    }
};



class Tofas : public Car{
public:
    Car *clone()override
    {
        return new Tofas(*this); //copy ctor
    }


    void start() override
    {
        std::cout << "Tofas has started\n";
    }

    void run() override
    {
        std::cout << "Tofas is running\n";
    }

    void stop() override
    {
        std::cout << "Tofas has stopped\n";
    }
};


class Volvo : public Car{
public:
    Car *clone()override
    {
        return new Volvo(*this); //copy ctor
    }

    void start() override
    {
        std::cout << "Volvo has started\n";
    }

    void run() override
    {
        std::cout << "Volvo is running\n";
    }

    void stop() override
    {
        std::cout << "Volvo has stopped\n";
    }
};

Car *create_random_car()
{
    switch (rand() % 6) {
    case 0: std::cout << "Mercedes...\n"; return new Mercedes;
    case 1: std::cout << "Audi...\n"; return new Audi;
    case 2: std::cout << "Fiat...\n"; return new Fiat;
    case 3: std::cout << "Tofas...\n"; return new Tofas;
    case 4: std::cout << "Audi8...\n"; return new Audi8;
    case 5: std::cout << "Volvo...\n"; return new Volvo;
    }

    return nullptr;
}

#endif // CAR_HPP
