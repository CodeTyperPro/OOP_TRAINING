#ifndef _UTIL_H_
#define _UTIL_H_
#include<iostream>
#include<sstream>
#include "Items.h"
#include "Types.h"
#include "Layout.h"

void askTypeAnimal(Container &container);
void showMenu(Container &container);
void exit_();

void add_new_animal_type(Container &container);
void list_all_animals_type(Container &container);
void search_animal_type(Container &container);
void update_animal_type(Container &container);
void delete_animal_type(Container &container);

#endif
