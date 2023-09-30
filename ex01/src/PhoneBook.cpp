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

void	PhoneBook::display( void ) const
{
	int			index;
	std::string	num;

	if (!Contact::getIndex())
	{
		std::cout << "Contact list is empty." << std::endl;
		std::cin.clear();
		return ;
	}
	printFormat("index");
	for (int i = 0; i < 3; i++)
		printFormat(getDataField(i));
	std::cout << "|" << std::endl;
	for (int i = 0; i < SIZE && i < Contact::getIndex(); i++)
	{
		printFormat(std::string(1, (char)('0' + i)));
		for (int j = 0; j < 3; j++)
			printFormat(contacts[i].getInfoContact(j));
		std::cout << "|" << std::endl;
	}
	while (num.empty())
	{
		std::cout << "Insert contact index:\t";
		std::getline(std::cin, num);
		if (std::cin.fail())
		{
			std::cout << std::endl;
			if (DEBUG)
				std::cerr << "EOF in display" << std::endl;
			return ;
		}
	}
	if (!isnum(num))
	{
		std::cerr << "Index must be a number." << std::endl;
		return ;
	}
	index = strToInt(num);
	if ((index < 0 || index >= Contact::getIndex()))
		std::cerr << "\nWrong index selected." << std::endl;
	else
		contacts[index].print();
}

void	PhoneBook::printFormat( std::string s ) const
{
	std::cout << "|";
	if (s.length() > 10)
	{
		std::cout.fill('.');
		std::cout.width(10);
		std::cout << std::left << s.substr(0, 9);
	}
	else
	{
		std::cout.fill(' ');
		std::cout.width(10);
		std::cout << std::right << s.substr(0, 10);
	}
}

void	PhoneBook::removeFirst( void )
{
	for (int i = 0; i < SIZE - 1; i++)
	{
		contacts[i] = contacts[i + 1];
	}
	contacts[SIZE - 1].~Contact();
	if (DEBUG)
		std::cout << "New number of contacts: " << Contact::getIndex() << std::endl;
}