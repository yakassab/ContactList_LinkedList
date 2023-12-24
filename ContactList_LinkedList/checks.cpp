#include "checks.h"
#include <regex>

bool isValidName(string name)
{
	// name cant be empty.
	if (name.empty()) {
		return false;
	}
	

	// name cant contain any numbers or special characters.
    for (int i = 0; i < name.length(); i++) {
		if (!isalpha(name[i]) && !isspace(name[i])) {
			return false;
		}
	}


return true;
}

bool isValidPhone(string phoneNumber)
{
	// phone number cant be empty.
	if (phoneNumber.empty()) {
		return false;
	}

	// phone number must be 11 digits long.
	if (phoneNumber.length() != 11) {
		return false;
	}

	// phone number must start with 01.
	if (phoneNumber[0] != '0' || phoneNumber[1] != '1') {
		return false;
	}

	// phone number cant contain any letters or special characters.
	for (int i = 0; i < phoneNumber.length(); i++) {
		if (!isdigit(phoneNumber[i])) {
			return false;
		}
	}

	return true;
}

bool isValidEmail(string email)
{
	regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
	return regex_match(email, pattern);
}

// write the function that checks if the building number is correct.
bool isValidBuildNo(string buildingNumber)
{
	// building number cant be empty.
	if (buildingNumber.empty()) {
		return false;
	}

	// building number cant contain any letters or special characters.
	for (int i = 0; i < buildingNumber.length(); i++) {
		if (!isdigit(buildingNumber[i])) {
			return false;
		}
	}

	return true;
}

bool isValidStreet(string street)
{
	// street cant be empty.
	if (street.empty()) {
		return false;
	}

	// street cant contain special characters but can contain digits and spaces.
	for (int i = 0; i < street.length(); i++) {
		if (!isalpha(street[i]) && !isdigit(street[i]) && !isspace(street[i])) {
			return false;
		}
	}
	

	return true;
}

bool isValidCity(string city)
{
	// city cant be empty.
	if (city.empty()) {
		return false;
	}

	// city cant contain special characters but can contain digits and spaces.
	for (int i = 0; i < city.length(); i++) {
		if (!isalpha(city[i]) && !isdigit(city[i]) && !isspace(city[i])) {
			return false;
		}
	}



	return true;
}


