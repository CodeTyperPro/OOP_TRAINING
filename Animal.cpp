#include "Animal.h"

Animal::Animal(int id, std::string name, bool isHungry, int age)
    : id{id}, name{name}, isHungry{isHungry}, age{age} {
}

std::ostream &operator<<(std::ostream &os, const Animal &animal){
    os<<"[Animal => {id: "<<animal.id<<"}, name: "<<animal.name<<", isHungry: "<<animal.isHungry<<", age: "<<animal.age<<"}]";
    return os;
}

std::string Animal::info(){
    std::string ms = name + " is an Animal, currently" + (!isHungry ? " not" : "") + " hungry and " + std::to_string(age) + " years old";
    return ms;
}

std::string Animal::blink(){

    return nullptr;
}


std::string Animal::eat(){

    return nullptr;
}

int Animal::getId(){ return id; }

void Animal::setId(const int id){
    this->id = id;
}

std::string Animal::getName(){ return name; };

void Animal::setName(const std::string name){
    this->name = name;
}