#ifndef __Singleton__
#define __Singleton__

class singleton{
    private:
    static singleton instance;
    singleton(){}
    public:
    static singleton getInstance();
    void print();
};

#endif