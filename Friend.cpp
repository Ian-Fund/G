//
// Created by mathbot on 2/28/18.
//

#include "Friend.h"

void Friend::setName(string name) {
    this->name = name;
}

void Friend::setMoney(double money) {
    this->money = money;
}

string Friend::getName() {
    return name;
}

double Friend::getMoney() {
    return money;
}

Friend::Friend(string name, double money, Friend *next) {
    this->name = name;
    this->money = money;
    next = 0;
}

