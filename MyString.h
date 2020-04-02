#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>

class MyString {

	friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);
	friend std::istream &operator>>(std::istream &is, MyString &rhs);
private:
	char *str {};
public:
	// No-arg constructor
	MyString();
	// Single-arg constructor
	MyString(const char *in_str);
	// Copy constructor
 	MyString(const MyString &rhs);
	// Move constructor
	MyString(MyString &&rhs);

	// Copy assignment
	MyString &operator=(const MyString &rhs);
	// Move assignment
	MyString &operator=(MyString &&rhs);

	// Destructor
	MyString::~MyString() {
	
		delete [] str;
	}

	MyString operator-() const;
	bool operator==(const MyString &rhs) const;
	bool operator!=(const MyString &rhs) const;
	bool operator<(const MyString &rhs) const;
	bool operator>(const MyString &rhs) const;
	MyString operator+(const MyString &rhs) const;
	MyString operator+=(const MyString &rhs) const;
	MyString operator*(const MyString &rhs) const;
	MyString operator*=(const MyString &rhs) const;

	char *get_str() const;
};

#endif
