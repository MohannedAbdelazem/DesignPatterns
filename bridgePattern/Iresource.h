#ifndef __Iresource__
#define __Iresource__
#include <iostream>
class Iresource{
    public:
    virtual std::string snippet() = 0;
    virtual std::string image() = 0;
    virtual std::string title() = 0;
    virtual std::string url() = 0;
};

#endif