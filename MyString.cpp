#include <iostream>
#include <cstring>
#include "MyString.h"

// No-arg constructor
MyString::MyString() {

	str = new char[1];
	std::strcat(str, "/0");
}

// Single-arg constructor
MyString::MyString(const char *in_str) {

	str = new char[std::strlen(in_str) + 1];	
	std::strcpy(str, in_str);
}

// Copy constructor
MyString::MyString(const MyString &rhs) {

	*str = *(rhs.str);
}

// Move constructor
MyString::MyString(MyString &&rhs) {

	str = rhs.str;
	rhs.str = nullptr;
}

// Equality
bool MyString::operator==(const MyString &rhs) const {

	return (this->str == rhs.str);
}

// Inequality
bool MyString::operator!=(const MyString &rhs) const {

	return (this->str != rhs.str);
}

char *MyString::get_str() const {

	return str;
}
