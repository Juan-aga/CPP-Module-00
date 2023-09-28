#include "Contact.hpp"
#include <iostream>
#include <map>

int	main( void )
{
	Contact		prueba[8];
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
			prueba[Contact::getIndex()].add();
	}
/*	while (Contact::getIndex() < 1) 
	{
		prueba[i].add();
		i++;
	}
	prueba[0].print();
	i--;
*/	return 0;
}
