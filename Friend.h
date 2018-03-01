//
// Created by mathbot on 2/28/18.
//

#ifndef LAB_2_27_FRIEND_H
#define LAB_2_27_FRIEND_H

#include <iostream>
using namespace std;

class Friend {
private:
    string name;
    double money;

public:
    Friend *next;
    Friend(string name = " ", double money = 0, Friend *next = 0);
    string getName();
    double getMoney();
    void setName(string name);
    void setMoney(double money);
    //Friend *getNext(Friend *node);

    //operator overload to compare two Friends

};


#endif //LAB_2_27_FRIEND_H
