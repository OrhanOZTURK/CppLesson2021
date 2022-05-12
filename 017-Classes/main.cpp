#include "car.hpp"
#include <iostream>

using namespace std;
//elams formasyonu

//DDD --> dreaded Dimond of derivation


class EDevice{
private:
    bool mflag = false;

public:
    void turn_on()
    {
        mflag = true;
    }

    void turn_off()
    {
        mflag = false;
    }


    bool isOn()const
    {
        return mflag;
    }
};


class Modem : virtual public EDevice{
public:
    void sendData()
    {
        if(!isOn()){
            cout << "cihaz kapali oldgun data gonderilemiyor\n";
        }
        else{
            cout << "data gonderildi\n";
        }
    }
};

class Fax : virtual public EDevice{
public:
    void sendFax()
    {
        if(!isOn()){
            cout << "cihaz kapali oldgun fax gonderilemiyor\n";
        }
        else{
            cout << "fax gonderildi\n";
        }
    }
};

class FaxModem : public Fax, public Modem{
    ///
};


int main()
{
    FaxModem fm;

    fm.turn_on();
    fm.sendFax();
    fm.sendData();


}

/***************************************************/
/***************************************************/










