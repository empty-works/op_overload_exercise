#include <iostream>
#include <cstring>
#include "MyString.h"

// No-arg constructor
MyString::MyString() {

	str = new char[1];
	std::strcat(str, "/0");
}

// Equality
bool MyString::operator==(const MyString &rhs) const {

	return (this->str == rhs.str);
}

// Inequality
bool MyString::operator!=(const MyString &rhs) const {

	return (this->str != rhs.str);
}
