#include "target.h"
#include "client.h"
#include "Adaptee.h"
int main(){
    Adaptee a;
    Target t(a);
    client c(&t);
    c.Print();
    return 0;
}