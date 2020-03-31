#include <iostream>

class MyString {

private:
	char *str {};
public:
	// No-arg constructor
	MyString();
	// Single-arg constructor
	MyString(const char *str);
	// Copy constructor
 	MyString(const MyString &rhs);
	// Move constructor
	MyString(const MyString &&rhs);

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
