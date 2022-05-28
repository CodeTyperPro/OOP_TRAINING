#include "Bird.h"

Bird::Bird(int id, std::string name, bool isHungry, int age, int wings)
    : Animal{id, name, isHungry, age}, wings{wings} {
}

void Bird::sing(){

}

std::ostream &operator<<(std::ostream &os, const Bird &bird){
    os<<"[Bird => {id: "<<bird.id<<"}, name: "<<bird.name<<", isHungry: "<<bird.isHungry<<", age: "<<bird.age<<", wings: "<<bird.wings<<"}]";
    return os;
}

std::string Bird::info(){
    std::string ms = name + " is a Bird type Animal, currently" + (!isHungry ? " not" : "") + " hungry and " + std::to_string(age) + " years old";
    return ms;
}

std::string Bird::blink(){

    return nullptr;
}


std::string Bird::eat(){

    return nullptr;
}
