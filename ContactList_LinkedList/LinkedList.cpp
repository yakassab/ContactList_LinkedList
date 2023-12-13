
#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace std;
#include <iostream>
#include <string>
#include <vcclr.h>
#include <fstream>
#include "Contact.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace std;
typedef Contact ElementType;
public ref class LinkedList {
public:
    // Nested node class
    ref class Node {
    public:
        Contact^ data;
        Node^ next;

        Node() : next(nullptr) {}
        Node(Contact^ dataValue) : data(dataValue), next(nullptr) {}
    };

    typedef Node^ NodePointer;
    NodePointer first;
    int mySize;

public:
    LinkedList() {
        first = nullptr;
        mySize = 0;
    }
    LinkedList(const LinkedList^ origList) {
        first = nullptr;
        mySize = origList->mySize;
        if (mySize == 0) return;

        Node^ origPtr = origList->first;
        first = gcnew Node(origPtr->data);  // copy first node
        Node^ lastPtr = first;

        origPtr = origPtr->next;

        while (origPtr != nullptr) {
            lastPtr->next = gcnew Node(origPtr->data);
            origPtr = origPtr->next;
            lastPtr = lastPtr->next;
        }
    }
    ~LinkedList() {
        Node^ prev = first;
        Node^ ptr;

        while (prev != nullptr) {
            ptr = prev->next;
            delete prev;
            prev = ptr;
        }
    }
    const LinkedList^ operator=(const LinkedList^ rightSide) {

    }
    bool empty() {
        return mySize == 0;
    }
    void insert(Contact^ dataVal, int index) {
        if (index < 0 || index > mySize) {
            Console::WriteLine("Illegal location to insert -- {0}", index);
            return;
        }

        mySize++;
        Node^ newPtr = gcnew Node(dataVal);
        Node^ predPtr = first;

        if (index == 0) {
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
    void erase(int index) {
        if (index < 0 || index >= mySize) {
            Console::WriteLine("Illegal location to delete -- {0}", index);
            return;
        }

        mySize--;
        Node^ ptr;
        Node^ predPtr = first;

        if (index == 0) {
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
    void erase(String^ firstname, String^ lastname) {
        Node^ ptr = search(firstname, lastname);
        Node^ ptr2 = first;
        int counter = 0;

        if (ptr == nullptr) {
            return;
        }
        else {
            while (ptr2 != nullptr) {
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
    NodePointer search(String^ firstname, String^ lastname) {
        Node^ ptr = first;

        while (ptr != nullptr) {
            if (ptr->data->getFirstName() == firstname && ptr->data->getLastName() == lastname) {
                return ptr;
            }
            ptr = ptr->next;
        }

        return nullptr; // not found
    }
    void display(ostream& out) {
        Node^ ptr = first;

        while (ptr != nullptr) {
            out << ptr->data;
            ptr = ptr->next;
            Console::WriteLine();
        }
    }
    void read() {
        String^ firstName;
        String^ lastName;
        String^ email;
        String^ phone;
        String^ address;
        int count = 0;

        System::IO::StreamReader^ myFile = gcnew System::IO::StreamReader("contactstest.txt");
        if (myFile->Peek() != -1) {  // Check if the file is not empty
            while (!myFile->EndOfStream) {
                firstName = myFile->ReadLine();
                lastName = myFile->ReadLine();
                email = myFile->ReadLine();
                phone = myFile->ReadLine();
                address = myFile->ReadLine();

                Contact^ temp = gcnew Contact(firstName, lastName, email, phone, address);
                insert(temp, count);
                count++;
            }
        }
        myFile->Close();
    }
    void write(){
        ofstream myFileDelete("contactstest.txt", std::ofstream::out | std::ofstream::trunc); // clears data in file
        myFileDelete.close();

        ofstream myFileSave("contactstest.txt", ios::app); // saves data to file
        Node^ temp = first;

        for (int x = 0; x < mySize; x++) {
            myFileSave << temp->data;
            temp = temp->next;
        }

        myFileSave.close();
    }
    void swap(NodePointer a, NodePointer b){
        Contact^ temp = a->data;
        a->data = b->data;
        b->data = temp;
    }
    void sort(){
        Node^ ptr1 = first;
        Node^ ptr2 = ptr1->next;

        for (int i = 0; i < mySize; i++) {
            for (int j = 0; j < mySize - 1; j++) {
                if ((ptr1->data->getFirstName() + " " + ptr1->data->getLastName()) >
                    (ptr2->data->getFirstName() + " " + ptr2->data->getLastName())) {
                    swap(ptr1, ptr2);
                }
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            ptr1 = first;
            ptr2 = ptr1->next;
        }
    }
    //// Input operator for managed code
    //LinkedList% operator>>(ElementType val) {
    //    insert(val, mySize); // Assuming ElementType is the type you want to read
    //    return *this;
    //}
    // Output operator for managed code
    LinkedList% operator<<(ostream% out) {
        display(out);
        return *this;
    }
};



