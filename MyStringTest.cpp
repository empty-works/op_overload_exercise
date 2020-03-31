#include <iostream>
#include "MyString.h"

int main() {

	MyString no_arg_con;
	std::cout << "Testing no-arg constructor..." << no_arg_con.get_str() << std::endl; 
	MyString single_arg_con{"Testing"};
	std::cout << "Testing single arg constructor..." << single_arg_con.get_str() << std::endl;
	MyString copy_con{single_arg_con};
	std::cout << "Testing copy constructor..." << copy_con.get_str() << std::endl;
	MyString move_con{MyString{"Move con test"}};
	std::cout << "Testing move constructor..." << move_con.get_str() << std::endl;	
	return 0;
}
