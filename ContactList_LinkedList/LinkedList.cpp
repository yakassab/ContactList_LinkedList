#include "LinkedList.h"

#include<fstream>
#include <cstdlib>
#include <stdlib.h>
// default class constructor
LinkedList::LinkedList() : first(0), mySize(0) {}

//copy constructor
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

// destructor
inline LinkedList::~LinkedList() {
    LinkedList::NodePointer prev = first, ptr;
    while (prev != 0)
    {
        ptr = prev->next;
        delete prev;
        prev = ptr;
    }
}

// checks if list is emoty
bool LinkedList::empty() const {
    return mySize == 0;
}


// assignment operator overloading
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

// insert new contact to new node to list at index
void LinkedList::insert(ElementType dataVal, int index) {
    if (index < 0 || index > mySize)return;
    
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

// erase node by index
void LinkedList::erase(int index) {
    if (index < 0 || index >= mySize)return;
    
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

// search for node by first name and last name.
LinkedList::NodePointer LinkedList::search(string firstname, string lastname) const
{
    Node* ptr = first;
    while (ptr != 0)
    {
        if ((ptr->data.getFirstName() == firstname) && (ptr->data.getLastName() == lastname))
        {
			return ptr;
		}
		ptr = ptr->next;
	}
	return 0;
}

// Erase a contact by first name and last name.
void LinkedList::erase(string firstname, string lastname)
{
    if(empty())return;
    firstname[0] = toupper(firstname[0]);
    lastname[0] = toupper(lastname[0]);
    NodePointer ptr = search(firstname, lastname);
    NodePointer ptr2 = first;
    int counter = 0;
    if (ptr == 0) {
        return;
    }
    else {
        while (ptr2 != 0) {
            if (ptr2 == ptr) {
				erase(counter);
				break;
			}
			else {
				counter++;
			}
            ptr2 = ptr2->next;
        }
    }
		
   

}


// function to display all contacts
void LinkedList::display(ostream& out) const {
    if (empty())return;
    LinkedList::NodePointer ptr = first;
    while (ptr != 0)
    {
        out << ptr->data;
        ptr = ptr->next;
        cout << endl;
    }
    
}




// read list from file.
void LinkedList::read()
{
    string firstName, lastName, email, phone, address;
    int count = 0;
    ifstream myFile("contactstest.txt");
    if (myFile.is_open()) {
        while ((myFile.peek()) != EOF) {
            getline(myFile, firstName);
            getline(myFile, lastName);
            getline(myFile, email);
            getline(myFile, phone);
            getline(myFile, address);
            Contact temp(firstName, lastName, email, phone, address);
            insert(temp, count);
            count++;
        }
        myFile.close();
    }
}

// write list to file.
void  LinkedList::write() const {
    ofstream myFileDelete("contactstest.txt", std::ofstream::out | std::ofstream::trunc); //clears data in file
    myFileDelete.close();
    ofstream myFileSave("contactstest.txt", ios::app); //saves data to file
    NodePointer temp = first;
    for (int x = 0; x < mySize; x++) {
        myFileSave << temp->data;
        temp = temp->next;
    }
    myFileSave.close();

}

// swap function for sort
void LinkedList::swap(NodePointer a, NodePointer b){
Contact temp = a->data;
	a->data = b->data;
	b->data = temp;
}


// sort list in alphabetical order
void LinkedList::sort()
{
    if (empty())return;

    NodePointer ptr1 = first;
    NodePointer ptr2 = ptr1->next;


    for (int i = 0; i < mySize; i++) {
		for (int j = 0; j < mySize - 1; j++) {
			if ((ptr1->data.getFirstName()+ " " + ptr1->data.getLastName())> (ptr2->data.getFirstName() + " " + ptr2->data.getLastName())) {
				swap(ptr1, ptr2);
			}
			ptr1 = ptr1->next;
			ptr2 = ptr2->next;
		}
		ptr1 = first;
		ptr2 = ptr1->next;
	}
    
}

// output operator overloading
ostream& operator<<(ostream& out, const LinkedList& aList) {
    aList.display(out);
    return out;
}

// input operator overloading
istream& operator>>(istream& in, LinkedList& aList) {
    ElementType val;
    in >> val;
    aList.insert(val, aList.mySize);
    return in;
}

