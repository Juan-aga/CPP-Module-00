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

void	PhoneBook::add( void )
{
	int size;

	size = Contact::getIndex();
	if (!(size < SIZE))
	{
		if (DEBUG)
			std::cout << "Book fulll: SIZE = "<< SIZE << " CINDEX = " << size << std::endl;
		PhoneBook::removeFirst();
		size -= 1;
	}
	contacts[size].add();
}

void	PhoneBook::removeFirst( void )
{
	contacts[0].~Contact();
	for (int i = 0; i < SIZE - 1; i++)
	{
		contacts[i] = contacts[i + 1];
	}
	if (DEBUG)
		std::cout << "New number of contacts: " << Contact::getIndex() << std::endl;
}
