#include "proxy.h"

void proxy::request(){
    if(age>=18)
        realSub->request();
}