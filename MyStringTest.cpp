#include <iostream>
#include "MyString.h"

int main() {

	MyString no_arg_con;
	std::cout << "Testing no-arg constructor..." << no_arg_con.get_str() << std::endl; 
	//MyString single_arg_con{"Testing"};
	
	return 0;
}
