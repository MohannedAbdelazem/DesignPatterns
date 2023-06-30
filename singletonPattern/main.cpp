#include "singleton.h"

int main(){
    singleton s = singleton::getInstance();
    s.print();
    return 0;
}