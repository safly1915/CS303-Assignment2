#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include <iostream>
using namespace std;

class Single_Linked_List { //class for single linked list
private:
    struct Node { //setup for node structure
        int data; //data field
        Node* next; //pointer for next node
        Node(int val) : data(val), next(nullptr) {} //initializer for node
    };
    Node* head; //pointer for head of list
    Node* tail; //pointer for tail of list
    size_t num_items; //number of items in list

public:
    Single_Linked_List(); //constructor
    ~Single_Linked_List(); //destructor

    void push_front(int item); //push item to front of list
    void push_back(int item); //push item to back of list
    void pop_front(); //remove item from front of list
    void pop_back(); //remove item from back of list
    int front() const; //get front item
    int back() const; //get back item
    bool empty() const; //check if list is empty
    void insert(size_t index, int item); //insert item at specific index
    bool remove(size_t index); //remove item at specific index
    size_t find(int item) const; //find position of item in list
    void display() const; //return the whole list
};

#endif // SINGLE_LINKED_LIST_H