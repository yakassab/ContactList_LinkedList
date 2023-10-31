#include "Contact.h"
#include <regex>
Contact::Contact()
{
}

Contact::Contact(string firstName, string lastName, string phone, string email, string address)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->phoneNumber = phone;
	this->email = email;
	this->address = address;
}

Contact::~Contact()
{
}

string Contact::getFirstName()
{
	return firstName;
}

string Contact::getLastName()
{
	return lastName;
}

string Contact::getPhone()
{
	return phoneNumber;
}

string Contact::getEmail()
{
	return email;
}

string Contact::getAddress()
{
	return address;
}	

void Contact::setFirstName(string firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(string lastName)
{
	this->lastName = lastName;
}

void Contact::setPhoneNumber(string phone)
{
	this->phoneNumber = phone;
}	

void Contact::setEmail(string email)
{
	this->email = email;
}

void Contact::setAddress(string address)
{
	this->address = address;
}

bool Contact::isValidName(string name) {
	// Check if the name is empty.
	if (name.empty()) {
		return false;
	}
	// Check if the first character is a letter.
	if (!isalpha(name[0])) {
		return false;
	}
	return true;
}

bool Contact::isValidPhone(string phoneNumber)
{
	// Check if the phone number is 11 characters long.
	if (phoneNumber.size() != 11) {
		return false;
	}

	// Check if the phone number starts with 01.
	if (phoneNumber.substr(0, 2) != "01") {
		return false;
	}

	// Check if the remaining characters are digits.
	for (int i = 2; i < phoneNumber.size(); ++i) {
		if (!isdigit(phoneNumber[i])) {
			return false;
		}
	}
	return true;
}

bool Contact::isValidEmail(string email)
{
	regex emailRegex("[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9-]+(?:\\.[a-zA-Z0-9-]+)*");

	// Match the email address against the regular expression.
	return regex_match(email, emailRegex);
}

bool Contact::isValidAddress(string address)
{
	return !address.empty();
}



// operator== overload
bool operator==(const Contact& lhs, const Contact& rhs){

	return lhs.firstName == rhs.firstName && lhs.lastName == rhs.lastName;
}

// cin>> operator
istream& operator>>(istream& in, Contact& contact) {
	string firstName, lastName, phone, email, address;
	cout << "Enter the first name: ";
	in >> firstName;
	cout << "Enter the last name: ";
	in >> lastName;
	cout << "Enter the phone number: ";
	in >> phone;
	cout << "Enter the email address: ";
	in >> email;
	cout << "Enter the address: ";
	in >> address;
	contact.setFirstName(firstName);
	contact.setLastName(lastName);
	contact.setPhoneNumber(phone);
	contact.setEmail(email);
	contact.setAddress(address);
	return in;
}

// cout<< operator
ostream& operator<<(ostream& out, const Contact& contact) {
	out << contact.firstName << endl;
	out << contact.lastName << endl;
	out << contact.phoneNumber << endl;
	out << contact.email << endl;
	out << contact.address << endl;

	return out;
}


