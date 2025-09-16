#include "header.hpp"
#include "List.hpp"

// function definitions
template<typename T, typename U>
void List<T, U>::insert(T value, U value2) {
    Node* newNode = new Node(value, value2); 
    head->newNode; 
    next->null;
}

template<typename T, typename U>
void List<T, U>::removeCommand() {
    if (head == nullptr) {
        cout << "List is empty, cannot remove" << endl;
    }
    else {

    }
}

template<typename T, typename U>
void List<T, U>::displayCommands() {
    if (head == nullptr) {
        cout << "List is empty" << endl;
    }
    else {
        for ()
        cout << head << endl;
    }

    return;
}