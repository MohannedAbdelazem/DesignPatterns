#include "factories.h"
#include "Animals.h"

Animal* ageFactory::createAnimal(){
    int age;
    std::cout << "Enter Age: ";
    std::cin >> age;
    if(age<10){
        Cat c("cat", age);
        return new Cat(c);
    }
    else if(age <20){
        Dog Doggo("Dog", age);
        return new Dog(Doggo);
    }
    else{
        Duck D("Duck", age);
        return new Duck(D);
    }
}

