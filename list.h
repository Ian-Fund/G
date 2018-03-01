//
// Created by mathbot on 2/28/18.
//

#ifndef LAB_2_27_LIST_H
#define LAB_2_27_LIST_H


#include "Friend.h"

class list {
private:
    Friend *head=0;
    Friend *tail=0;
public:
    list();
    //list(Friend *node);
    bool isEmpty();
    void addAtEnd(string name, double money);
    void remove (Friend *beingRemoved); // this needs to be different or have a way to get the pointer
    void removeAll();
    void print();
};


#endif //LAB_2_27_LIST_H
