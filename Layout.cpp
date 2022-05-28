#include "Layout.h"
#include "Items.h"

Animal read_animal(){
    std::cout<<"Reading Animal:"<<std::endl;
    std::string name;
    std::cout<<"Enter the name of the animal: ";
    std::cin>>name;
    std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No)";

    char option = '\0';
    std::cin>>option;
    option = toupper(option);

    while (option != 'Y' && option != 'N'){
        std::cout<<"Enter a valid option, please!"<<std::endl;
        std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No)";
        std::cin>>option;
        option = toupper(option);
    }

    bool is_Hungry = (option == 'Y' ? true : false);

    std::cout<<"Enter the age of "<<name<<": ";
    int age{};
    std::cin>>age;

    while(age<0){
        std::cout<<"Enter a valid age, please!"<<std::endl;
        std::cout<<"Enter the age of "<<name<<": ";
        std::cin>>age;
    }

    Animal animal {0, name, is_Hungry, age};

    return animal;
}

Bird read_bird(){
    std::cout<<"Reading Bird:"<<std::endl;
    std::string name;
    std::cout<<"Enter the name of the bird: ";
    std::cin>>name;
    std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No)";

    char option = '\0';
    std::cin>>option;
    option = toupper(option);

    while (option != 'Y' && option != 'N'){
        std::cout<<"Enter a valid option, please!"<<std::endl;
        std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No)";
        std::cin>>option;
        option = toupper(option);
    }

    bool is_Hungry = (option == 'Y' ? true : false);

    std::cout<<"Enter the age of "<<name<<": ";
    int age{};
    std::cin>>age;

    while(age<0){
        std::cout<<"Enter a valid age, please!"<<std::endl;
        std::cout<<"Enter the age of "<<name<<": ";
        std::cin>>age;
    }

    std::cout<<"Enter the wings of: ";
    int wings{};
    std::cin>>wings;
    
    while(wings<0){
        std::cout<<"Enter a valid wings, please!"<<std::endl;
        std::cout<<"Enter the wings of: ";
        std::cin>>wings;
    }

    Bird bird{0, name, is_Hungry, age, wings};

    return bird;
}

FlyingBird read_flying_bird(){    
    std::cout<<"Reading FlyingBird:"<<std::endl;
    std::string name;
    std::cout<<"Enter the name of the FlyingBird: ";
    std::cin>>name;
    std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No)";

    char option = '\0';
    std::cin>>option;
    option = toupper(option);

    while (option != 'Y' && option != 'N'){
        std::cout<<"Enter a valid option, please!"<<std::endl;
        std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No)";
        std::cin>>option;
        option = toupper(option);
    }

    bool is_Hungry = (option == 'Y' ? true : false);

    std::cout<<"Enter the age of "<<name<<": ";
    int age{};
    std::cin>>age;

    while(age<0){
        std::cout<<"Enter a valid age, please!"<<std::endl;
        std::cout<<"Enter the age of "<<name<<": ";
        std::cin>>age;
    }

    std::cout<<"Enter the wings of: ";
    int wings{};
    std::cin>>wings;
    
    while(wings<0){
        std::cout<<"Enter a valid wings, please!"<<std::endl;
        std::cout<<"Enter the wings of: ";
        std::cin>>wings;
    }

    std::cout<<"Enter the range (0-10): ";
    int range{};
    std::cin>>range;

    while(range<0 || range>10){
        std::cout<<"Enter a valid range, please!"<<std::endl;
        std::cout<<"Enter the range (0-10): ";        
        std::cin>>range;
    }

    FlyingBird flyingBird{0, name, is_Hungry, age, wings, range};

    return flyingBird;
}

NotFlyingBird read_not_flying_bird(){
  
    std::cout<<"Reading NotFlyingBird:"<<std::endl;
    std::string name;
    std::cout<<"Enter the name of the NotFlyingBird: ";
    std::cin>>name;
    std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No)";

    char option = '\0';
    std::cin>>option;
    option = toupper(option);

    while (option != 'Y' && option != 'N'){
        std::cout<<"Enter a valid option, please!"<<std::endl;
        std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No)";
        std::cin>>option;
        option = toupper(option);
    }

    bool is_Hungry = (option == 'Y' ? true : false);

    std::cout<<"Enter the age of "<<name<<": ";
    int age{};
    std::cin>>age;

    while(age<0){
        std::cout<<"Enter a valid age, please!"<<std::endl;
        std::cout<<"Enter the age of "<<name<<": ";
        std::cin>>age;
    }

    std::cout<<"Enter the wings of: ";
    int wings{};
    std::cin>>wings;
    
    while(wings<0){
        std::cout<<"Enter a valid wings, please!"<<std::endl;
        std::cout<<"Enter the wings of: ";
        std::cin>>wings;
    }

    std::cout<<"Enter the usefulness: ";
    int usefulness{};
    std::cin>>usefulness;

    NotFlyingBird notFlyingBird{0, name, is_Hungry, age, wings, usefulness};

    return notFlyingBird;
}

void insert_animal(){
    items_animal->append(read_animal());
}

void insert_bird(){
    items_bird->append(read_bird());
}

void insert_flying_bird(){
    items_flying_bird->append(read_flying_bird());
}

void insert_not_flying_bird(){
    items_not_flying_bird->append(read_not_flying_bird());
}

void update_animal(){   
    std::cout<<"Updating Animal: "<<std::endl;
    std::cout<<"Enter the Id: ";
    int id;
    std::cin>>id;

    if(items_animal->exist(id)){
        Animal update_animal = read_animal();
        update_animal.setId(id);
        std::cout<<"Animal with Id "<<id<<" updated."<<std::endl;
    } else{
        std::cout<<"Animal with Id "<<id<<" not updated."<<std::endl;
    }
}

void update_bird(){    
    std::cout<<"Updating Bird: "<<std::endl;
    std::cout<<"Enter the Id: ";
    int id;
    std::cin>>id;

    if(items_flying_bird->exist(id)){
        Bird update_bird = read_bird();
        update_bird.setId(id);
        std::cout<<"Bird with Id "<<id<<" updated."<<std::endl;
    } else{
        std::cout<<"Bird with Id "<<id<<" not updated."<<std::endl;
    }
}

void update_flying_bird(){
    std::cout<<"Updating FlyingBird: "<<std::endl;
    std::cout<<"Enter the Id: ";
    int id;
    std::cin>>id;

    if(items_flying_bird->exist(id)){
        FlyingBird update_flying_bird = read_flying_bird();
        update_flying_bird.setId(id);
        std::cout<<"FlyingBird with Id "<<id<<" updated."<<std::endl;
    } else{
        std::cout<<"FlyingBird with Id "<<id<<" not updated."<<std::endl;
    }
}

void update_not_flying_bird(){
    std::cout<<"Updating NotFlyingBird: "<<std::endl;
    std::cout<<"Enter the Id: ";
    int id;
    std::cin>>id;

    if(items_not_flying_bird->exist(id)){
        NotFlyingBird update_not_flying_bird = read_not_flying_bird();
        update_not_flying_bird.setId(id);
        std::cout<<"NotFlyingBird with Id "<<id<<" updated."<<std::endl;
    } else{
        std::cout<<"NotFlyingBird with Id "<<id<<" not updated."<<std::endl;
    }
}

void search_animal(){
    std::cout<<"Search Animal: "<<std::endl;
    std::cout<<"Enter the name of the animal: ";
    std::string name;
    std::cin>>name;

    if(items_animal->exist(name)){
        int index = items_animal->getIndex(name);
        std::cout<<"Animal found at index "<<index<<"."<<std::endl;
        std::cout<<items_animal->getItem(index)<<std::endl;
    }
}

void search_bird(){
    std::cout<<"Search Bird: "<<std::endl;
    std::cout<<"Enter the name of the Bird: ";
    std::string name;
    std::cin>>name;

    if(items_bird->exist(name)){
        int index = items_bird->getIndex(name);
        std::cout<<"Bird found at index "<<index<<"."<<std::endl;
        std::cout<<items_bird->getItem(index)<<std::endl;
    }
}

void search_flying_bird(){
    std::cout<<"Search FlyingBird: "<<std::endl;
    std::cout<<"Enter the name of the FlyingBird: ";
    std::string name;
    std::cin>>name;

    if(items_flying_bird->exist(name)){
        int index = items_flying_bird->getIndex(name);
        std::cout<<"FlyingBird found at index "<<index<<"."<<std::endl;
        std::cout<<items_flying_bird->getItem(index)<<std::endl;
    }
}

void search_not_flying_bird(){
    std::cout<<"Search NotFlyingBird: "<<std::endl;
    std::cout<<"Enter the name of the NotFlyingBird: ";
    std::string name;
    std::cin>>name;

    if(items_not_flying_bird->exist(name)){
        int index = items_not_flying_bird->getIndex(name);
        std::cout<<"NotFlyingBird found at index "<<index<<"."<<std::endl;
        std::cout<<items_not_flying_bird->getItem(index)<<std::endl;
    }
}

void list_animals(){    
    items_animal->display();
}

void list_birds(){
    items_bird->display();
}

void list_flying_birds(){
    items_flying_bird->display();
}

void list_not_flying_birds(){
    items_not_flying_bird->display();
}

void delete_animal(){
    std::cout<<"Delete Animal: "<<std::endl;
    std::cout<<"Enter the Id: ";
    int id;
    std::cin>>id;

    if(items_animal->exist(id)){
        items_animal->remove(id);
        std::cout<<"Animal with Id "<<id<<" deleted."<<std::endl;
    }   
}

void delete_bird(){
    std::cout<<"Delete Bird: "<<std::endl;
    std::cout<<"Enter the Id: ";
    int id;
    std::cin>>id;

    if(items_bird->exist(id)){
        items_bird->remove(id);
        std::cout<<"Animal with Id "<<id<<" deleted."<<std::endl;
    }   
}

void delete_flying_bird(){
    std::cout<<"Delete FlyingBird: "<<std::endl;
    std::cout<<"Enter the Id: ";
    int id;
    std::cin>>id;

    if(items_flying_bird->exist(id)){
        items_flying_bird->remove(id);
        std::cout<<"FlyingBird with Id "<<id<<" deleted."<<std::endl;
    }
}

void delete_not_flying_birImportantedd(){
    std::cout<<"Delete NotFlyingBird: "<<std::endl;
    std::cout<<"Enter the Id: ";
    int id;
    std::cin>>id;

    if(items_not_flying_bird->exist(id)){
        items_not_flying_bird->remove(id);
        std::cout<<"NotFlyingBird with Id "<<id<<" deleted."<<std::endl;
    }
}

void display_select_animal(Animal& animal){
    std::cout<<"What do you want to do with "<<animal.getName()<<"?"<<std::endl;
    std::cout<<"\n"
        "B-Blink\n"
        "E-Eat\n"
        "I-Info\n"
        "Action: ";
    
    char action = '\0';
    std::cin>>action;
    action = toupper(action);

    bool is_okay{true};
    switch(action){
        case 'B': std::cout<<animal.blink()<<std::endl; break;
        case 'E': std::cout<<animal.eat()<<std::endl; break;
        case 'I': std::cout<<animal.info()<<std::endl; break;
            std::cout<<"Invalid option. Choose a valid option, please!"<<std::endl;
            is_okay = false;
    }

    if(!is_okay){
        display_select_animal(animal);
    }
}

void display_select_bird(Bird& bird){
    std::cout<<"What do you want to do with "<<bird.getName()<<"?"<<std::endl;
    std::cout<<"\n"
        "B-Blink\n"
        "E-Eat\n"
        "I-Info\n"
        "S-Sing\n"
        "Action: ";
    
    char action = '\0';
    std::cin>>action;
    action = toupper(action);

    bool is_okay{true};
    switch(action){
        case 'B': std::cout<<bird.blink()<<std::endl; break;
        case 'E': std::cout<<bird.eat()<<std::endl; break;
        case 'I': std::cout<<bird.info()<<std::endl; break;
        case 'S': std::cout<<bird.sing()<<std::endl; break;
            std::cout<<"Invalid option. Choose a valid option, please!"<<std::endl;
            is_okay = false;
    }

    if(!is_okay){
        display_select_animal(bird);
    }
}

void display_select_flying_bird(FlyingBird& flying_bird){

    std::cout<<"What do you want to do with "<<flying_bird.getName()<<"?"<<std::endl;
    std::cout<<"\n"
        "B-Blink\n"
        "E-Eat\n"
        "I-Info\n"
        "S-Sing\n"
        "F-Fly\n"
        "Action: ";
    
    char action = '\0';
    std::cin>>action;
    action = toupper(action);

    bool is_okay{true};
    switch(action){
        case 'B': std::cout<<flying_bird.blink()<<std::endl; break;
        case 'E': std::cout<<flying_bird.eat()<<std::endl; break;
        case 'I': std::cout<<flying_bird.info()<<std::endl; break;
        case 'S': std::cout<<flying_bird.sing()<<std::endl; break;
        case 'F': std::cout<<flying_bird.fly()<<std::endl; break;
            std::cout<<"Invalid option. Choose a valid option, please!"<<std::endl;
            is_okay = false;
    }

    if(!is_okay){
        display_select_animal(flying_bird);
    }
}

void display_select_not_flying_bird(FlyingBird& not_flying_bird){
    std::cout<<"What do you want to do with "<<not_flying_bird.getName()<<"?"<<std::endl;
    std::cout<<"\n"
        "B-Blink\n"
        "E-Eat\n"
        "I-Info\n"
        "S-Sing\n"
        "Action: ";
    
    char action = '\0';
    std::cin>>action;
    action = toupper(action);

    bool is_okay{true};
    switch(action){
        case 'B': std::cout<<not_flying_bird.blink()<<std::endl; break;
        case 'E': std::cout<<not_flying_bird.eat()<<std::endl; break;
        case 'I': std::cout<<not_flying_bird.info()<<std::endl; break;
        case 'S': std::cout<<not_flying_bird.sing()<<std::endl; break;
            std::cout<<"Invalid option. Choose a valid option, please!"<<std::endl;
            is_okay = false;
    }

    if(!is_okay){
        display_select_animal(not_flying_bird);
    }
}
