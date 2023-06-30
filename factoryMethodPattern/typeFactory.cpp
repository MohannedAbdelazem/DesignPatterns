#include "factories.h"
#include "Animals.h"

Animal* TypeFactory::createAnimal(){
    std::string type;
    std::cout << "Enter type: ";
    std::cin >> type;
    if(type == "cat"){
        Cat c("cat", 10);
        return new Cat(c);
    }
    else if(type == "dog"){
        Dog d("Dog", 10);
        return new Dog(d);
    }
    else{
        Duck D("Duck", 10);
        return new Duck(D);
    }
}