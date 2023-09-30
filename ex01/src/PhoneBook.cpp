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
		PhoneBook::_removeFirst();
		size -= 1;
	}
	_contacts[size].add();
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
	_printFormat("index");
	for (int i = 0; i < 3; i++)
		_printFormat(getDataField(i));
	std::cout << "|" << std::endl;
	for (int i = 0; i < SIZE && i < Contact::getIndex(); i++)
	{
		_printFormat(std::string(1, (char)('0' + i)));
		for (int j = 0; j < 3; j++)
			_printFormat(_contacts[i].getInfoContact(j));
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
		std::cerr << "Wrong index selected." << std::endl;
	else
		_contacts[index].print();
}

void	PhoneBook::_printFormat( std::string s ) const
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

void	PhoneBook::_removeFirst( void )
{
	for (int i = 0; i < SIZE - 1; i++)
	{
		_contacts[i] = _contacts[i + 1];
	}
	_contacts[SIZE - 1].~Contact();
	if (DEBUG)
		std::cout << "New number of contacts: " << Contact::getIndex() << std::endl;
}
