#include "singleLL.h"

Single_Linked_List::Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {} //constructor

Single_Linked_List::~Single_Linked_List() { //destructor
    while (!empty()) {
        pop_front();
    }
}

void Single_Linked_List::push_front(int item) { //push item to front of list
    Node* new_node = new Node(item);
    if (empty()) {
        head = tail = new_node;
    } else {
        new_node->next = head;
        head = new_node;
    }
    num_items++;
}

void Single_Linked_List::push_back(int item) { //push item to back of list
    Node* new_node = new Node(item);
    if (empty()) {
        head = tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
    num_items++;
}

void Single_Linked_List::pop_front() { //remove item from front of list
    if (!empty()) {
        Node* temp = head;
        head = head->next;
        delete temp;
        num_items--;
    }
}

void Single_Linked_List::pop_back() { //remove item from back of list
    if (!empty()) {
        if (head == tail) {
            delete head;
            head = tail = nullptr;
        } else {
            Node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = nullptr;
        }
        num_items--;
    }
}

int Single_Linked_List::front() const { //get front item
    if (!empty()) {
        return head->data;
    }
    throw out_of_range("List is empty");
}

int Single_Linked_List::back() const { //get back item
    if (!empty()) {
        return tail->data;
    }
    throw out_of_range("List is empty");
}

bool Single_Linked_List::empty() const { //check if list is empty
    return num_items == 0;
}

void Single_Linked_List::insert(size_t index, int item) { //insert item at specific index
    if (index > num_items) {
        index = num_items;
    }
    if (index == 0) {
        push_front(item);
    } else if (index == num_items) {
        push_back(item);
    } else {
        Node* new_node = new Node(item);
        Node* temp = head;
        for (size_t i = 0; i < index - 1; ++i) {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
        num_items++;
    }
}

bool Single_Linked_List::remove(size_t index) { //remove item at specific index
    if (index >= num_items) {
        return false;
    }
    if (index == 0) {
        pop_front();
    } else {
        Node* temp = head;
        for (size_t i = 0; i < index - 1; ++i) {
            temp = temp->next;
        }
        Node* to_delete = temp->next;
        temp->next = to_delete->next;
        if (to_delete == tail) {
            tail = temp;
        }
        delete to_delete;
        num_items--;
    }
    return true;
}

size_t Single_Linked_List::find(int item) const { //find position of item in list
    Node* temp = head;
    size_t index = 0;
    while (temp != nullptr) {
        if (temp->data == item) {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return num_items;
}

void Single_Linked_List::display() const { //return whole list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << std::endl;
}