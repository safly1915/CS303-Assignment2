#include "stack.h"

void Stack::push(int item) { //push item onto stack
    data.push_back(item); 
}

void Stack::pop() { //remove item from top of stack if not empty
    if (!data.empty()) 
        data.pop_back();
    else out_of_range("Stack is empty");
}

int Stack::top() const { //get top item from stack
    if (!data.empty()) 
        return data.back();
    throw out_of_range("Stack is empty");
}

bool Stack::empty() const { //check if stack is empty
    return data.empty(); 
}

double Stack::average() const { //calculate average of elements in stack
    if (data.empty()) return 0;
    int sum = 0;
    for (size_t i = 0; i < data.size(); ++i){
        sum += data[i];
    }
    return static_cast<double>(sum) / data.size();
}