#include <iostream>
using namespace std;
#pragma once
class Contact
{
private:
	string name;
	string phoneNumber;
	string email;
	string address;

public:
	Contact();
	Contact(string name, string phoneNumber, string email, string address);
	~Contact();

	//---------Getters & Setters------------//
	string getName();
	string getPhone();
	string getEmail();
	string getAddress();
	void setName(string name);
	void setPhoneNumber(string phoneNumber);
	void setEmail(string email);
	void setAddress(string address);
	//----------------Checks----------------//
	bool isValidName(string name);
	bool isValidPhone(string phoneNumber);
	bool isValidEmail(string email);
	bool isValidAddress(string address);
};

