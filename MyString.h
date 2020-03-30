#include <iostream>

class MyString {

private:
	char *str {};
public:
	// No-arg constructor
	MyString();
	// Single-arg constructor
	MyString(const char *str);	
	MyString operator-() const;
	bool operator==(const MyString &rhs) const;
	bool operator!=(const MyString &rhs) const;
	bool operator<(const MyString &rhs) const;
	bool operator>(const MyString &rhs) const;
	MyString operator+(const MyString &rhs) const;
	MyString operator+=(const MyString &rhs) const;
	MyString operator*(const MyString &rhs) const;
	MyString operator*=(const MyString &rhs) const;
};
