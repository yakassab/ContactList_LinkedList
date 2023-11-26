#include <iostream>
using namespace std;
#pragma once
class Contact
{
private:
	string firstName;
	string lastName;
	string phoneNumber;
	string email;
	string address;

public:

	//----------------Constructors----------------//
	Contact();
	Contact(string firstName, string lastName, string phoneNumber, string email, string address);
	Contact(const Contact& contact);
	
	//----------------Destructor----------------//
	~Contact();

	//---------Getters & Setters------------//
	string getFirstName();
	string getLastName();
	string getPhone();
	string getEmail();
	string getAddress();
	void setFirstName(string fisrtName);
	void setLastName(string lastName);
	void setPhoneNumber(string phoneNumber);
	void setEmail(string email);
	void setAddress(string address);

	//----------------Checks----------------//
	bool isValidName(string name);
	bool isValidPhone(string phoneNumber);
	bool isValidEmail(string email);
	bool isValidAddress(string address);

	friend bool operator==(const Contact& lhs, const Contact& rhs);
	friend ostream& operator<<(ostream& out, const Contact& contact);

};

istream& operator>>(istream& in, Contact& contact);
