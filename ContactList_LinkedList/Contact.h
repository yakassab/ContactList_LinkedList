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
	Contact();
	Contact(string firstName, string lastName, string phoneNumber, string email, string address);
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
};

