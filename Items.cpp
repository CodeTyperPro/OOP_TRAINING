#include "Items.h"

template<class C>
void append(std::vector<C> &items, C item, Container &container){
    item.setId(container.last_id);
    items.push_back(item);
    container.last_id++;
}

template<typename C>
void remove(std::vector<C>& items, C item){
    items.erase(item);
}

template<typename C>
void remove(std::vector<C>& items, int id){
    int index = getIndex(items, id);
    items.erase(items.begin() + index);
}

template<typename C>
void insert(std::vector<C> &items, int index, C item){
    items.insert(getItem(items, index), item);
}

template<typename C>
bool exist(std::vector<C> &items, const std::string name){
    for (C& i : items){
        if(i.getName() == name){
            return true;
        }
    }
    return false;
}

template<typename C>
bool exist(std::vector<C> &items, const int id){
    for (C& i : items){
        if(i.getId() == id){
            return true;
        }
    }
    return false;
}

template<typename C>
C getItem(std::vector<C>& items, const int index){
    return items.at(index);
}

template<typename C>
int getIndex(std::vector<C>& items, const int id){
    for (int i = 0; i<items.size(); i++){
        if(items.at(i).getId() == id){
            return i;
        }
    }
    return -1;
}

template<typename C>
int getIndex(std::vector<C>& items, const std::string name){
    for (int i = 0; i<items.size(); i++){
        if(items.at(i).getName() == name){
            return i;
        }
    }
    return -1;
}

template<typename C>
void display(std::vector<C>& items, Container& container){
    std::vector<std::string> types = {"Animal", "Bird", "FlyingBird", "NotFLying"};
    std::cout<<"List "<< types[(int) container.type_of_animal]<<": "<<std::endl;
    for (const C& x : items){
        std::cout<<x<<std::endl;
    }
}

template<typename C>
int lenght(const std::vector<C>& items){
    return items.size();
}
