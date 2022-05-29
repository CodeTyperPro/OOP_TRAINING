#include "Util.h"

// Show the main manu which will give to user, the opportunity to perform all the available operations
void showMenu(Container& container){
    std::cout<<"\n::: MENU :::";
    std::cout<<"\n\nWelcome to the >Animals Managment System< application!";
    std::cout<<"\n\nPlease select a menu point:";
    std::cout<<"\n"
            "A) Add new animal\n"
            "L) List all animals | Select an animal\n"
            "S) Search animal name\n"
            "U) Update animal name\n"
            "D) Delete animal\n"
            "E) Exit\n"
            "Operation: ";

    char option;
    std::cin>>option;
    option = toupper(option);
    switch(option){
        case 'A': add_new_animal_type(container); break;
        case 'L': list_all_animals_type(container); break;
        case 'S': search_animal_type(container); break;
        case 'U': update_animal_type(container); break;
        case 'D': delete_animal_type(container); break;
        case 'E': exit_(); break;
        default:
            std::cout<<"Invalid option. Choose a valid option, please!"<<std::endl;
            break;
    }

    showMenu(container); // Call the main menu
}

// Ask to user the type of animal he wants to work with
void askTypeAnimal(Container& container){

    std::cout<<"QUESTION:"<<std::endl;
    std::cout<<"What type of Animal do you want to create? (A-Animal, B-Bird, F-Flying Bird, N-Not Flying Bird)"<<std::endl;
    std::cout<<"Option: ";

    char option;
    std::cin>>option;
    option = toupper(option); // Always convert the option entered to upper case because of misstypes

    bool is_okay = true;
    switch (option)
    {
        case 'A': container.type_of_animal = Types::Animal; break;
        case 'B': container.type_of_animal = Types::Bird; break;
        case 'F': container.type_of_animal = Types::FlyingBird; break;
        case 'N': container.type_of_animal = Types::NotFlyingBird; break;
        default:
            std::cout<<"Invalid option. Choose a valid option, please!"<<std::endl;
            is_okay = false;
            break;
    }

    if(is_okay){
        showMenu(container); // Call the main menu
    } else{
        askTypeAnimal(container); // Ask again the type of animal. The one entered is not valid
    }
}

// Exit the program entirely
void exit_(){
    exit(0);
}

// Call the layout to insert a new animal
void add_new_animal_type(Container& container){
    switch (container.type_of_animal)
    {
        case Types::Animal: insert_animal(container); break;
        case Types::Bird: insert_bird(container); break;
        case Types::FlyingBird: insert_flying_bird(container); break;
        case Types::NotFlyingBird: insert_not_flying_bird(container); break;
        default: break;
    }
}

// List all the animal of any type
void list_all_animals_type(Container& container){
    switch (container.type_of_animal)
    {
        case Types::Animal: list_animals(container); break;
        case Types::Bird: list_birds(container); break;
        case Types::FlyingBird: list_flying_birds(container); break;
        case Types::NotFlyingBird: list_not_flying_birds(container); break;
        default: break;
    }
    
    // Execute the selection of an animal to print the equivalent action it can do :)
    std::cout<<"Enter the index if you wish to select an animal or [S] to skip, please: ";
    std::cin>>std::ws;
    std::string option;
    std::cin>>option;

    if(toupper(option[0]) != 'S'){

        while(!is_number(option)){
            std::cout<<"Invalid index. Please, enter a valid index: ";
            std::cin>>option;
        }

        int index{};
        std::stringstream os(option);
        os>>index;

        // Display the action that the given animal is able to do
        display_actions_types(container, index);
    }
}

// Search the animal of any type
void search_animal_type(Container& container){
    switch (container.type_of_animal)
    {
        case Types::Animal: search_animal(container); break;
        case Types::Bird: search_bird(container); break;
        case Types::FlyingBird: search_flying_bird(container); break;
        case Types::NotFlyingBird: search_not_flying_bird(container); break;
        default: break;
    }
}

// Update any animal
void update_animal_type(Container& container){
    switch (container.type_of_animal)
    {
        case Types::Animal: update_animal(container); break;
        case Types::Bird: update_bird(container); break;
        case Types::FlyingBird: update_flying_bird(container); break;
        case Types::NotFlyingBird: update_not_flying_bird(container); break;
        default: break;
    }
}

// Delete any animal
void delete_animal_type(Container &container){
    switch (container.type_of_animal)
    {
        case Types::Animal: delete_animal(container); break;
        case Types::Bird: delete_bird(container); break;
        case Types::FlyingBird: delete_flying_bird(container); break;
        case Types::NotFlyingBird: delete_not_flying_bird(container); break;
        default: break;
    }
}
