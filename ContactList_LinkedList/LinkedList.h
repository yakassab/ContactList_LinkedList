#ifndef LList
#define LList

#include <iostream>
#include "Contact.h"
using namespace std;
typedef Contact ElementType;

class LinkedList {
private:
    // Nested node class
    class Node {
    public:

        ElementType data;
        Node* next; // How does it refer to itself although it isn't created yet?

        Node() : next(0) {}
        Node(ElementType dataValue) : data(dataValue), next(0) {}
    };

    typedef Node* NodePointer;
    NodePointer first;
    int mySize;

public:
    LinkedList(); // builds an empty List object; first is 0 and mySize is 0.
    LinkedList(const LinkedList& origList); // Copy constructor.
    ~LinkedList(); // Destructor.
    const LinkedList& operator=(const LinkedList& rightSide); // Assignment operator.
    bool empty(); // Check if this list is empty.
    void insert(ElementType dataVal, int index); // Insert a value into a list at a given index.
    void erase(int index); // Remove a value from a list at a given index.
    int search(ElementType dataVal); // Search for an data value in this list.
    void display(ostream& out) const; // Display the contents of this list.
    int nodeCount(); // Count the elements (nodes) of this list.
    // Extra -----------------------------------------------------------------------------------
    void reverse(); // Reverse this list.
    bool ascendingOrder(); // Check if the elements of this list are in ascending order.
    // End of Extra ----------------------------------------------------------------------------
    friend istream& operator>>(istream& in, LinkedList& aList);

};

ostream& operator<<(ostream& out, const LinkedList& aList);
istream& operator>>(istream& in, LinkedList& aList);

#endif /* LList */