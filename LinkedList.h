#ifndef LList
#define LList

#include <iostream>
#include<fstream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "Contact.h"
using namespace std;
typedef Contact ElementType;

class LinkedList {
public:
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
    bool empty() const; // Check if this list is empty.
    void insert(ElementType dataVal, int index); // Insert a value into a list at a given index.
    void erase(int index); // Remove a value from a list at a given index.
    void erase(string firstname, string lastname); // Remove a value from a list at a given index.
    NodePointer search(string firstname, string lastname) const; // Search for an data value in this list.
    void display(ostream& out) const; // Display the contents of this list.    
     void read();
     void write() const;
     void swap(NodePointer a, NodePointer b);
     void sort();


     friend istream& operator>>(istream& in, LinkedList& aList);

};
ostream& operator<<(ostream& out, const LinkedList& aList);


#endif /* LList */