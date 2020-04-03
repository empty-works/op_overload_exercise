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
MyString::MyString(const MyString &rhs) 
	:str{nullptr} {

	str = new char[std::strlen(rhs.str) + 1];
	std::strcpy(str, rhs.str);
}

// Move constructor
MyString::MyString(MyString &&rhs) {

	str = rhs.str;
	rhs.str = nullptr;
}

// Copy assignment
MyString &MyString::operator=(const MyString &rhs) {
	
	if(this == &rhs) {
	
		return *this;
	}
	delete [] this->str;
	str = new char[std::strlen(rhs.str) + 1];
	std::strcpy(this->str, rhs.str);
	return *this;
}

// Move assignment
MyString &MyString::operator=(MyString &&rhs) {

	if(this == &rhs) {
	
		return *this;
	}	
	this->str = rhs.str;
	rhs.str = nullptr;
	return *this;	
}

// Destructor
MyString::~MyString() {

	delete [] str;
}

// Equality
bool MyString::operator==(const MyString &rhs) const {

	return (this->str == rhs.str);
}

// Inequality
bool MyString::operator!=(const MyString &rhs) const {

	return (this->str != rhs.str);
}

// Input stream
std::ostream &operator<<(std::ostream &os, const MyString &rhs) {

	os << rhs.str;
	return os;	
}

// Output stream
std::istream &operator>>(std::istream &is, MyString &rhs) {

	char *buff = new char[1000];
	is >> buff;
	rhs = MyString{buff};
	delete [] buff;
	return is;
}

// Less than equality
bool MyString::operator<(const MyString &rhs) const {

	return (std::strcmp(this->str, rhs.str) < 0);	
}

// Greater than equality
bool MyString::operator>(const MyString &rhs) const {

	return (std::strcmp(this->str, rhs.str) > 0);
}


MyString MyString::operator+(const MyString &rhs) const {

	char *buff = new char[std::strlen(this->str) + std::strlen(rhs.str) + 1];	
	std::strcpy(buff, this->str);
	std::strcat(buff, rhs.str);
	MyString newString{buff};
	return newString;	
}


MyString MyString::operator+=(const MyString &rhs) const {

	return (*this + rhs);
}

char *MyString::get_str() const {

	return str;
}
