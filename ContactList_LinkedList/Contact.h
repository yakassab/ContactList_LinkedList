#include <iostream>
using namespace System;
using namespace System::Collections::Generic;
using namespace std;
#pragma once

public ref class Contact {
public:
    String^ firstName;
    String^ lastName;
    String^ phoneNumber;
    String^ email;
    String^ address;

    Contact();
    Contact(String^ first, String^ last) : firstName(first), lastName(last){}
    Contact(String^ first, String^ last, String^ phone, String^ email, String^ address) : firstName(first), lastName(last), phoneNumber(phone), email(email), address(address) {}
    ~Contact();

    //---------Getters & Setters------------//
    String^ getFirstName();
    String^ getLastName();
    String^ getPhone();
    String^ getEmail();
    String^ getAddress();
    void setFirstName(String^ firstName);
    void setLastName(String^ lastName);
    void setPhoneNumber(String^ phoneNumber);
    void setEmail(String^ email);
    void setAddress(String^ address);

    //----------------Checks----------------//
    bool isValidName(String^ name);
    bool isValidPhone(String^ phoneNumber);
    bool isValidEmail(String^ email);
    bool isValidAddress(String^ address);

    // Comparison operators
    bool operator==(const Contact^ rhs);
    bool operator!=(const Contact^ rhs);
};
// Implement the comparison operator==
bool Contact::operator==(const Contact^ rhs) {
    return this->firstName == rhs->firstName && this->lastName == rhs->lastName;
}
bool Contact::operator!=(const Contact^ rhs) {
    return !(*this == rhs);
}