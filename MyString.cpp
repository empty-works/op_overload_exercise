#include <iostream>
#include "MyString.h"

// Equality
bool MyString::operator==(const MyString &rhs) const {

	return (this->str == rhs.str);
}

// Inequality
bool MyString::operator!=(const MyString &rhs) const {

	return (this->str != rhs.str);
}
