#include "singleLL.h"
#include "stack.h"

int main() {
    Single_Linked_List list;
    list.push_back(10);
    list.push_front(5);
    list.insert(1, 7);
    list.push_back(15);
    list.display();
    list.pop_front();
    list.display();
    
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout << "Top: " << stack.top() << "\n";
    stack.pop();
    cout << "Average: " << stack.average() << "\n";
    return 0;
}