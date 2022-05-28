#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
#include<string.h>

class Animal{
    friend std::iostream &operator<<(std::&os, const Animal &animal);
private:
    static constexpr unsigned int def_id{0};
    static constexpr const char *def_name{"Unnnamed Animal"};
    static constexpr bool def_isHungry{false};
    static constexpr unsigned int def_age{0};
protected:
    unsigned int id;
    std::string name;
    bool isHungry;
    unsigned int age;
public:
    Animal() = default;
    Animal(unsigned int age = def_id, std::string name = def_name, bool isHungry = def_isHungry, int age = def_age);
    void blink();
    void eat();
    void info();
};

#endif