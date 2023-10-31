#include "LinkedList.h"


//-- Definition of the class constructor
LinkedList::LinkedList() : first(0), mySize(0) {}

//-- Definition of the copy constructor
LinkedList::LinkedList(const LinkedList& origList) : first(0), mySize(origList.mySize) {
    if (mySize == 0) return;
    LinkedList::NodePointer origPtr, lastPtr;
    first = new Node(origList.first->data);  // copy first node
    lastPtr = first;
    origPtr = origList.first->next;
    while (origPtr != 0)
    {
        lastPtr->next = new Node(origPtr->data);
        origPtr = origPtr->next;
        lastPtr = lastPtr->next;
    }
}

//-- Definition of the destructor
inline LinkedList::~LinkedList() {
    LinkedList::NodePointer prev = first, ptr;
    while (prev != 0)
    {
        ptr = prev->next;
        delete prev;
        prev = ptr;
    }
}

// Definition of empty()
bool LinkedList::empty() {
    return mySize == 0;
}

//-- Definition of the assignment operator
const LinkedList& LinkedList::operator=(const LinkedList& rightSide) {
    mySize = rightSide.mySize;

    if (mySize == 0) {
        first = 0;
        return *this;
    }
    if (this != &rightSide)
    {
        this->~LinkedList();
        LinkedList::NodePointer origPtr, lastPtr;
        first = new Node(rightSide.first->data);  // copy first node
        lastPtr = first;
        origPtr = rightSide.first->next;

        while (origPtr != 0)
        {
            lastPtr->next = new Node(origPtr->data);
            origPtr = origPtr->next;
            lastPtr = lastPtr->next;
        }
    }
    return *this;
}

//-- Definition of insert()
void LinkedList::insert(ElementType dataVal, int index) {
    if (index < 0 || index > mySize)
    {
        cerr << "Illegal location to insert -- " << index << endl;
        return;
    }
    mySize++;
    LinkedList::NodePointer newPtr = new Node(dataVal), predPtr = first;
    if (index == 0)
    {
        newPtr->next = first;
        first = newPtr;
    }
    else {
        for (int i = 1; i < index; i++)
            predPtr = predPtr->next;
        newPtr->next = predPtr->next;
        predPtr->next = newPtr;
    }
}

//-- Definition of erase()
void LinkedList::erase(int index) {
    if (index < 0 || index >= mySize)
    {
        cerr << "Illegal location to delete -- " << index << endl;
        return;
    }
    mySize--;
    LinkedList::NodePointer ptr,
        predPtr = first;
    if (index == 0)
    {
        ptr = first;
        first = ptr->next;
        delete ptr;
    }
    else {
        for (int i = 1; i < index; i++)
            predPtr = predPtr->next;
        ptr = predPtr->next;
        predPtr->next = ptr->next;
        delete ptr;
    }
}

//-- Definition of search()
int LinkedList::search(ElementType dataVal) {
    int loc;
    LinkedList::NodePointer tempP = first;
    for (loc = 0; loc < mySize; loc++)
        if (tempP->data == dataVal)
            return loc;
        else
            tempP = tempP->next;
    return -1;
}

//-- Definition of display()
void LinkedList::display(ostream& out) const {
    LinkedList::NodePointer ptr = first;
    while (ptr != 0)
    {
        out << ptr->data << "  ";
        ptr = ptr->next;
    }
}

//-- Definition of nodeCount()
int LinkedList::nodeCount() {
    int count = 0;
    LinkedList::NodePointer ptr = first;
    while (ptr != 0)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}   // or simply,  { return mySize; }

//-- Definition of reverse()
void LinkedList::reverse() {
    NodePointer prevP = 0,
        currentP = first,
        nextP;
    while (currentP != 0)
    {
        nextP = currentP->next;
        currentP->next = prevP;
        prevP = currentP;
        currentP = nextP;
    }
    first = prevP;       // new head of (reversed) linked list
}

//-- Definition of ascendingOrder()
bool LinkedList::ascendingOrder() {
    if (mySize <= 1)
        //empty or one element list
        return true;
    //else
    NodePointer prevP = first,
        tempP = first->next;
    while (tempP != 0 && prevP->data <= tempP->data)
    {
        prevP = tempP;
        tempP = tempP->next;
    }
    if (tempP != 0)
        return false;
    // else
    return true;
}

//-- Definition of the output operator
ostream& operator<<(ostream& out, const LinkedList& aList) {
    aList.display(out);
    return out;
}

//-- Definition of the input operator
istream& operator>>(istream& in, LinkedList& aList) {
    ElementType val;
    in >> val;
    aList.insert(val, aList.mySize); // Needed friend to access "mySize"
    return in;
}