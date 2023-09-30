#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int	main( void )
{
	PhoneBook	prueba;
	std::string	command;

	while (command != "EXIT")
	{
		if (std::cin.fail() || std::cin.eof())
		{
			if (DEBUG)
				std::cout << "EOF\n";
			return 1;
		}
		std::cin.clear();
		std::cout << "Please enter a command:\tADD SEARCH EXIT" << std::endl;
		if (std::getline(std::cin, command))
		{
			if (command == "ADD")
				prueba.add();
			else if (command == "SEARCH")
				prueba.display();
		}
	}
	return 0;
}
