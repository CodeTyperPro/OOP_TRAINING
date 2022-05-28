#include "FlyingBird.h"

FlyingBird::FlyingBird(int id, std::string name, bool isHungry, int age, int wings, int range)
    : Bird{id, name, isHungry, age, wings}, range{range} {
}

void FlyingBird::fly(){

}
/*
std::ostream &operator<<(std::ostream &os, const FlyingBird &flying_bird){
    os<<"[FlyingBird => {id: "<<flying_bird.id<<"}, name: "<<flying_bird.name<<", isHungry: "<<flying_bird.isHungry<<", age: "<<flying_bird.age<<", wings: "<<flying_bird.wings<<", arange"<<flying_bird.range<<"}]";
    return os;
}
*/
std::string FlyingBird::info(){
    std::string ms = name + " is a Flying type Animal, currently" + (!isHungry ? " not" : "") + " hungry and " + std::to_string(age) + " years old";
    return ms;
}

std::string FlyingBird::blink(){
    return nullptr;
}


std::string FlyingBird::eat(){
    return nullptr;
}
