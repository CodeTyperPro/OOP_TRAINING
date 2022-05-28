#ifndef _ITEMS_H_
#define _ITEMS_H_
#include<vector>
#include "Util.cpp"

enum class Types {
    Animal = 0,
    Bird,
    FlyingBird,
    NotFlyingBird
};

template<class C>
class Items{
private:
    int id;
    std::vector<C> list;
public:
    Items();
    ~Items();
    void append(C& item);
    void remove(C& item);
    void remove(int id);
    bool exist(const std::string name);
    bool exist(const int id);
    void insert(int index, C& item);
    C getItem(const int index);
    int getIndex(const int id);
    int getIndex(const std::string name);
    void display();
    int lenght();
};

#endif