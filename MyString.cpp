#include <iostream>
#include <cstring>
#include "MyString.h"

// No-arg constructor
MyString::MyString() {

	str = new char[1];
	std::strcat(str, "/0");
}

// Single-arg constructor
MyString::MyString(const char *str) {

	std::strcpy(this->str, str);
}

// Equality
bool MyString::operator==(const MyString &rhs) const {

	return (this->str == rhs.str);
}

// Inequality
bool MyString::operator!=(const MyString &rhs) const {

	return (this->str != rhs.str);
}

char *MyString::get_str() {

	return str;
}
