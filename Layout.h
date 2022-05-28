#ifndef _LAYOUT_H_
#define _LAYOUT_H_

#include "Animal.h"
#include "Bird.h"
#include "FlyingBird.h"
#include "NotFlyingBird.h"

Animal read_animal();
Bird read_bird();
FlyingBird read_flying_bird();
NotFlyingBird read_not_flying_bird();

void update_animal();
void update_bird();
void update_flying_bird();
void update_not_flying_bird();

void insert_animal();
void insert_bird();
void insert_flying_bird();
void insert_not_flying_bird();

void search_animal();
void search_bird();
void search_flying_bird();
void search_not_flying_bird();

void list_animals();
void list_birds();
void list_flying_birds();
void list_not_flying_birds();

void delete_animal();
void delete_bird();
void delete_flying_bird();
void delete_not_flying_bird();

void display_select_animal(Animal& animal);
void display_select_bird(Bird& bird);
void display_select_flying_bird(FlyingBird& flying_bird);
void display_select_not_flying_bird(FlyingBird& not_flying_bird);

#endif