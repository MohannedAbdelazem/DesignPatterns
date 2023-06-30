#ifndef __component__
#define __component__
#include <iostream>
class component{
    public:
    virtual std::string description() = 0;
    virtual int price() = 0;
};
#endif