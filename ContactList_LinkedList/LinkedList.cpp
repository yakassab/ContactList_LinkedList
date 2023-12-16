#include "LinkedList.h"
#include "Contact.h"
#include<fstream>
#include <cstdlib>
#include <stdlib.h>
#include <regex>
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
bool LinkedList::empty() const {
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

// Definition of search by first name and last name.
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
	return 0;   // not found
}

// Erase a contact by first name and last name.
void LinkedList::erase(string firstname, string lastname)
{
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


//-- Definition of display()
void LinkedList::display(ostream& out) const {
    LinkedList::NodePointer ptr = first;
    while (ptr != 0)
    {
        out << ptr->data;
        ptr = ptr->next;
        cout << endl;
    }
    
}





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

//save data
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

void LinkedList::swap(NodePointer a, NodePointer b){
Contact temp = a->data;
	a->data = b->data;
	b->data = temp;
}

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

Contact LinkedList::getContact(int index)
{
	NodePointer ptr = first;
	for (int i = 0; i < index; i++) {
		ptr = ptr->next;
	}
	return ptr->data;
}

LinkedList LinkedList::regexSearch(string text) const
{

    regex reg(".*" + text + ".*");


    Node* ptr = first;
    LinkedList list;
    while (ptr != 0)
    {
        string s1 = ptr->data.getFirstName();
        s1[0] = tolower(s1[0]);
        string s2 = ptr->data.getLastName();
        s2[0] = tolower(s2[0]);
        string s = s1 + " " + s2;
        if (regex_match(s, reg)){
            list.sortedInsert(ptr->data);
        }
        ptr = ptr->next;
    }
    return list;
}


// Function to insert a new node then sort.
void LinkedList::sortedInsert(ElementType data){
    insert(data, 0);
    sort();
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
