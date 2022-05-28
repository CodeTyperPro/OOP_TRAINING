#include "Animal.h"
#include "Bird.h"
#include "FlyingBird.h"
#include "NotFlyingBird.h"
#include "Items.h"
#include "Layout.h"

static Items<Animal> * items_animal = nullptr;
static Items<Bird> * items_bird = nullptr;
static Items<FlyingBird> * items_flying_bird = nullptr;
static Items<NotFlyingBird> * items_not_flying_bird = nullptr;
static Types type_of_animal{};
char option = '\0';

bool createInstance(){
    bool flag = true;
    switch (type_of_animal)
    {
        case Types::Animal:
            items_animal = new Items<Animal>();
            break;
        case Types::Bird:
            items_bird = new Items<Bird>();
            break;
        case Types::FlyingBird:
            items_flying_bird = new Items<FlyingBird>();
            break;
        case Types::NotFlyingBird:
            items_not_flying_bird = new Items<NotFlyingBird>();
            break;
        
        default:
            std::cout<<"Invalid instance."<<std::endl;
            flag = false;
            break;
    }

    return flag;
}

// Layout
void askTypeAnimal(){
    std::cout<<"QUESTION:"<<std::endl;
    std::cout<<"What type of Animal do you want to create? (A-Animal, B-Bird, F-Flying Bird, N-Not Flying Bird)"<<std::endl;
    std::cin>>option;
    option = toupper(option);

    bool is_okay = true;
    switch (option)
    {
        case 'A': type_of_animal = Types::Animal; break;
        case 'B': type_of_animal = Types::Bird; break;
        case 'F': type_of_animal = Types::FlyingBird; break;
        case 'N': type_of_animal = Types::NotFlyingBird; break;
        default:
            std::cout<<"Invalid option. Choose a valid option, please!"<<std::endl;
            is_okay = false;
            break;
    }

    if(is_okay){
        createInstance();
        showMenu();
    } else{
        askTypeAnimal();
    }
}

void showMenu(){
    std::cout<<"\n::: MENU :::";
    std::cout<<"\n\nWelcome to the >Animals Managment System< application!";
    std::cout<<"\n\nPlease select a menu point:";
    std::cout<<"\n"
            "A) Add new animal\n"
            "L) List all animals\n"
            "S) Search animal name\n"
            "U) Update animal name\n"
            "D) Delete animal\n"
            "E) Exit\n"
            "Operation: ";

    std::cin>>option;
    bool is_okay = true;
    switch(option){
        case 'A': add_new_animal_type(); break;
        case 'L': list_all_animals_type(); break;
        case 'S': search_animal_type(); break;
        case 'U': update_animal_type(); break;
        case 'D': delete_animal_type(); break;
        case 'E': exit_(); break;
        default: 
            std::cout<<"Invalid option. Choose a valid option, please!"<<std::endl;
            is_okay = false;
            break;
    }

    showMenu();
}

void exit_(){
    exit(0);
}

void add_new_animal_type(){
    switch (type_of_animal)
    {
        case Types::Animal: insert_animal(); break;
        case Types::Bird: insert_bird(); break;
        case Types::FlyingBird: insert_flying_bird(); break;
        case Types::NotFlyingBird: insert_not_flying_bird(); break;
        default: break;
    }
}

void list_all_animals_type(){
    switch (type_of_animal)
    {
        case Types::Animal: list_animals(); break;
        case Types::Bird: list_birds(); break;
        case Types::FlyingBird: list_flying_birds(); break;
        case Types::NotFlyingBird: list_not_flying_birds(); break;
        default: break;
    }
}

void search_animal_type(){
    switch (type_of_animal)
    {
        case Types::Animal: search_animal(); break;
        case Types::Bird: search_bird(); break;
        case Types::FlyingBird: search_flying_bird(); break;
        case Types::NotFlyingBird: search_not_flying_bird(); break;
        default: break;
    }
}

void update_animal_type(){
    switch (type_of_animal)
    {
        case Types::Animal: update_animal(); break;
        case Types::Bird: update_bird(); break;
        case Types::FlyingBird: update_flying_bird(); break;
        case Types::NotFlyingBird: update_not_flying_bird(); break;
        default: break;
    }
}

void delete_animal_type(){
    switch (type_of_animal)
    {
        case Types::Animal: delete_animal(); break;
        case Types::Bird: delete_bird(); break;
        case Types::FlyingBird: delete_flying_bird(); break;
        case Types::NotFlyingBird: delete_not_flying_bird(); break;
        default: break;
    }
}