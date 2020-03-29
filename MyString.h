#include <iostream>

class MyString {

private:
	char *str {};
public:
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
