#ifndef BIRD_H
#define BIRD_H
#include<iostream>
#include<string.h>
#include "Animal.h"

class Bird : public Animal{
private:
    static constexpr unsigned int wings{0};
protected:
    unsigned int id;
public:
    Bird() = default;
    Animal(unsigned int age = def_id, std::string name = def_name, bool isHungry = def_isHungry, int age = def_age);
    void blink();
    void eat();
    void info();
};

#endif