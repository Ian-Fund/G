//
// Created by mathbot on 2/28/18.
//

#include "list.h"


list::list() {
    head = 0;
    tail = 0;
}

bool list::isEmpty() {
    if (head == 0){
        return true;
    }
    else return false;
}

void list::addAtEnd(string name, double money) { // this might not work. test it and possibly add if  cur == 0 for empty list or something
    Friend *cur = head;
    if (isEmpty()){
        head = new Friend(name,money);
        head->next = head;
        return;
    }

    while(cur->next != head){  //I think this is head because it's a circular list
        cout<<"should be here\n";
        cur = cur->next;
        cout<<"get here?\n";
    }
    Friend *temp = new Friend(name,money);
    cur->next = temp;
    temp->next = head;
}

void list::print() {  //check this to make sure head->next doesn't point at itself
    Friend *cur = head;

    while(cur->next != head){
        cout<<cur->getName()<<" "<<cur->getMoney()<<endl;
        cur = cur->next;
    }
    if (cur->next == head){
        cout<<cur->getName()<<" "<<cur->getMoney()<<endl;
        return;
    }
}