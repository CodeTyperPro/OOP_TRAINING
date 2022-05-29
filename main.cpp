#include<iostream>
#include "Util.h"

using namespace std;

int main(){
    // Our container in which include all the vectors types (Animal, Bird, FlyingBird and NotFlyingBird)
    // And also the type of animals that will be select/chosen later on
    Container items{};
    
    // Call the function to ask the user the type of animal he/she wants to work with
    askTypeAnimal(items); 
    return 0;
}
