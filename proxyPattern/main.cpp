#include "proxy.h"
#include "RealSubject.h"

int main(){
    realSubject sub1;
    proxy prox(&sub1, 20);
    prox.request();
    return 0;
}