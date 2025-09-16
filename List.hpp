#include "header.hpp"
#include "Node.hpp"

template <typename T, typename U> class List {
private:
    Node<T, U>* head;

public:
    List(Node* head) {
        this->head = head;
    }

    ~List();

    // assignment functions
    void insert(T value, U value2); // -- populate list with commands

    void displayCommands(); // -- display all commands
    void removeCommand(); // -- remove commands
 
};

