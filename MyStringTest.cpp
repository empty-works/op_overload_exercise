#include <iostream>
#include "MyString.h"

int main() {

	MyString no_arg_con;
	std::cout << "Testing no-arg constructor..." << no_arg_con << std::endl; 
	MyString single_arg_con{"Testing"};
	std::cout << "Testing single arg constructor..." << single_arg_con << std::endl;
	MyString copy_con{single_arg_con};
	std::cout << "Testing copy constructor..." << copy_con << std::endl;
	MyString move_con{MyString{"Move con test"}};
	std::cout << "Testing move constructor..." << move_con << std::endl;
	
	// Copy assignment
	MyString test_copy_1{"Temp"};
	MyString test_copy_2{"Replace"};
	std::cout << "Test copy 1 before assignment: " << test_copy_1 << " " << "Test copy 2: " << test_copy_2 << std::endl;
	std::cout << "Testing copy assignment..." << (test_copy_1 = test_copy_2) << std::endl;
	std::cout << "Test copy 1 after assignment: " << test_copy_1 << std::endl;

	// Testing for equality
	std::cout << "Test for equality...should be 1: " << (move_con == move_con) << std::endl;
	// Testing for inequality
	std::cout << "Test for inequality...should be 1: " << (move_con != copy_con) << std::endl;	

	return 0;
}
