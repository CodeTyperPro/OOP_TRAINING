#ifndef _CONTAINER_H_
#define _CONTAINER_H_
#include<iostream>
#include<string.h>
#include<vector>
#include "Animal.h"
#include "Bird.h"
#include "FlyingBird.h"
#include "NotFlyingBird.h"
#include "Types.h"

class Container{
public:
    int last_id;
    Types type_of_animal;
    std::vector<Animal> items_animal;
    std::vector<Bird> items_bird;
    std::vector<FlyingBird> items_flying_bird;
    std::vector<NotFlyingBird> items_not_flying_bird;

    Container();
};

#endif
