#include "header.hpp"

template <typename T, typename U> class Node {
private:
    T value; // any-value pushed into the node
    U value2; // for 2nd value if needed
    Node* next;

public:
    Node(T value, U value2) {
        this->value = value;
        this->value2 = value2;
    };

    ~Node() {};
};