#ifndef _LAYOUT_H_
#define _LAYOUT_H_
#include "Util.h"
#include "Container.h"

Animal read_animal();
Bird read_bird();
FlyingBird read_flying_bird();
NotFlyingBird read_not_flying_bird();

void update_animal(Container& container);
void update_bird(Container& container);
void update_flying_bird(Container& container);
void update_not_flying_bird(Container& container);

void insert_animal(Container& container);
void insert_bird(Container& container);
void insert_flying_bird(Container& container);
void insert_not_flying_bird(Container& container);

void search_animal(Container& container);
void search_bird(Container& container);
void search_flying_bird(Container& container);
void search_not_flying_bird(Container& container);

void list_animals(Container& container);
void list_birds(Container& container);
void list_flying_birds(Container& container);
void list_not_flying_birds(Container& container);

void delete_animal(Container &container);
void delete_bird(Container &container);
void delete_flying_bird(Container &container);
void delete_not_flying_bird(Container &container);

void display_select_animal(Animal& animal);
void display_select_bird(Bird& bird);
void display_select_flying_bird(FlyingBird& flying_bird);
void display_select_not_flying_bird(NotFlyingBird& not_flying_bird);

#endif
