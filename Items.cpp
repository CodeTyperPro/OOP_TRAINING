#include "Items.h"
#include "Util.cpp"

template<class C>
Items<C>::Items(){
    id = 0;
}

template<class C>
void Items<C>::append(C& item){
    item.id = id;
    list.push_back(item);
    id++;
}

template<class C>
void Items<C>::remove(C& item){
    list.erase(item);
}

template<class C>
void Items<C>::remove(int id){

}

template<class C>
void Items<C>::insert(int index, C& item){
    list.insert(getItem(index), item);
}

template<class C>
bool Items<C>::exist(const std::string name){
    for (C& i : list){
        if(i.getName() == name){
            return true;
        }
    }
    return false;
}

template<class C>
bool Items<C>::exist(const int id){
    for (C& i : list){
        if(i.getId() == id){
            return true;
        }
    }
    return false;
}

template<class C>
C Items<C>::getItem(const int index){
    return list.at(index);
}

template<class C>
int Items<C>::getIndex(const int id){
    for (int i = 0; i<list.size(); i++){
        if(list.at(i).getId() == id){
            return i;
        }
    }
    return -1;
}

template<class C>
int Items<C>::getIndex(const std::string name){
    for (int i = 0; i<list.size(); i++){
        if(list.at(i).getName() == name){
            return i;
        }
    }
    return -1;
}

template<class C>
void Items<C>::display(){
    std::vector<std::string> types = {"Animal", "Bird", "FlyingBird", "NotFLying"};
    std::cout<<"List "<< types[(int) type_of_animal]<<": "<<std::endl;
    for (const T& x : items){
        std::cout<<x<<std::endl;
    }
}

template<class C>
int Items<C>::lenght(){

}