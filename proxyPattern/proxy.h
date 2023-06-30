#ifndef __Proxy__
#define __Proxy__
#include "Isubject.h"
class proxy: public Isubject{
    public:
    int age;
    Isubject *realSub;
    proxy(Isubject* sub, int age):realSub(sub), age(age){}
    void request();

};

#endif