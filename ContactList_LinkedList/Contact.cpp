#include "Contact.h"
using namespace System::Collections::Generic;
using namespace std;
using namespace System;
// Constructor
Contact::Contact() {
	// Initialize members as needed
	firstName = "";
	lastName = "";
	phoneNumber = "";
	email = "";
	address = "";
}
// Destructor
Contact::~Contact() {
	// Cleanup, if needed
}

//---------Getters & Setters------------//

String^ Contact::getFirstName() {
	return firstName;
}

String^ Contact::getLastName() {
	return lastName;
}

String^ Contact::getPhone() {
	return phoneNumber;
}

String^ Contact::getEmail() {
	return email;
}

String^ Contact::getAddress() {
	return address;
}

void Contact::setFirstName(String^ newFirstName) {
	firstName = newFirstName;
}

void Contact::setLastName(String^ newLastName) {
	lastName = newLastName;
}

void Contact::setPhoneNumber(String^ newPhoneNumber) {
	phoneNumber = newPhoneNumber;
}

void Contact::setEmail(String^ newEmail) {
	email = newEmail;
}

bool Contact::isValidName(String^ name) {
    // Check if the name is empty.
    if (String::IsNullOrEmpty(name)) {
        return false;
    }
    // Check if the first character is a letter.
    if (!Char::IsLetter(name[0])) {
        return false;
    }
    return true;
}

bool Contact::isValidPhone(String^ phoneNumber) {
    // Check if the phone number is 11 characters long.
    if (phoneNumber->Length != 11) {
        return false;
    }

    // Check if the phone number starts with "01".
    if (!phoneNumber->StartsWith("01")) {
        return false;
    }

    // Check if the remaining characters are digits.
    for each (Char c in phoneNumber->Substring(2)) {
        if (!Char::IsDigit(c)) {
            return false;
        }
    }
    return true;
}

bool Contact::isValidEmail(String^ email) {
        // Match the email address against the regular expression.
        System::Text::RegularExpressions::Regex^ emailRegex = gcnew System::Text::RegularExpressions::Regex("[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9-]+(?:\\.[a-zA-Z0-9-]+)*");
        return emailRegex->IsMatch(email);
}

bool Contact::isValidAddress(String^ address) {
    return !String::IsNullOrEmpty(address);
}

// Comparison operators
bool Contact::operator==(const Contact^ rhs) {
	// Implement your comparison logic here
	return this->firstName == rhs->firstName && this->lastName == rhs->lastName;
}

bool Contact::operator!=(const Contact^ rhs) {
	return !(*this == rhs);
}










