#include "header.hpp"

class Node {
    
    private:
    int value; // value pushed into the node
    Node* next;

    public:
    Node(); 
    ~Node();

    void insert(int value);
    void display();

};