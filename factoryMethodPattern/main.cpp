#include "factories.h"
using namespace std;
int main(){
    ageFactory f1;
    Animal* a = f1.createAnimal();
    std::cout << a->sound() << std::endl;
    TypeFactory f2;
    Animal* b = f2.createAnimal();
    std::cout << b->sound() << std::endl;
    return 0;
}