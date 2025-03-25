#ifndef STACK_H
#define STACK_H
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> data; //vector to hold stack elements
public:
    void push(int item); //push item onto stack
    void pop(); //remove top item from stack
    int top() const; //get top item from stack
    bool empty() const; //check if stack is empty
    double average() const; //calculate average of elements in stack
};

#endif