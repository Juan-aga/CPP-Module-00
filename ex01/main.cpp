#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int	main( void )
{
	PhoneBook	prueba;
	std::string	command;

	while (command != "EXIT")
	{
		std::cout << "Please enter a command:\tADD SEARCH EXIT" << std::endl;
		std::getline(std::cin, command);
		if (std::cin.fail())
		{
			std::cerr << "Exiting." << std::endl;
			return 1;
		}
		if (command == "ADD")
			prueba.contacts[Contact::getIndex()].add();
	}
	return 0;
}
