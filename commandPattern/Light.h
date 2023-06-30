#ifndef __Light__
#define __Light__

#define On true
#define Off false

class Light{
    private:
    bool state; //gets the state of the light bulb (1 for on and zero for off)
    public:
    Light();
    bool getState();
    void setState(bool state);
    void TurnOn();
    void TurnOff();
};

#endif