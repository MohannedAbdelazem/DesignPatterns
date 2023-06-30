#include "bevarages.h"
#include "additions.h"

int main(){
    tea t;
    soya s(&t);
    milk m(&s);
    soya ss(&m);
    std::cout << ss.description() << std::endl;
    return 0;
}