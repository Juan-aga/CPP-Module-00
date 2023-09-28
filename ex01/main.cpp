#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <limits>
#include <string>

int	main( void )
{
	PhoneBook	prueba;
	std::string	command;

	while (command != "EXIT" && !std::cin.eof())
	{
		std::cout << "Please enter a command:\tADD SEARCH EXIT" << std::endl;
		if (std::cin.eof())
		{
			std::cout << "EOF\n";
			std::cin.clear();
		}
		if (std::getline(std::cin, command))
//		std::cin.getline(&command[0], command.size());
//		if (command)
		{
			if (command == "ADD")
				prueba.add();
			else if (command == "SEARCH")
				prueba.display();
		}
///		if (std::cin.fail())
//		{
		else 
		{
			std::cerr << "Error de lectura " << std::endl;
			continue;
		}
//		std::cin.clear();
//		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//		std::cerr << "Exiting." << std::endl;
//			return 1;
//		}
	}
	return 0;
}
