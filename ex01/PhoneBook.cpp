#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook( void )
{
	if (DEBUG)
		std::cout << "Constuctor for PhoneBook" << std::endl;
}

PhoneBook::~PhoneBook( void )
{
	if (DEBUG)
		std::cout << "Destructor for PhoneBook" << std::endl;
}
