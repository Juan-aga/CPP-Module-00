#include <iostream>
#include "Contact.hpp"
#include <cstdlib>

Contact::Contact( void )
{
	if (DEBUG)
		std::cout << "Constructor " << Contact::_index << " Contact" << std::endl;
}

Contact::~Contact( void )
{
	Contact::_index -= 1;
	if (DEBUG)
		std::cout << "Destructor " << Contact::_index << " Contact" << std::endl;
}

void	Contact::increment( void )
{
	if (DEBUG)
		std::cout << "Contact " << Contact::_index << " added" << std::endl;
	Contact::_index +=1;
}

void	Contact::add( void )
{
	std::cin.clear();
	if (DEBUG)
		std::cout << "Add to " << Contact::_index << std::endl;
	for (int i = 0; i < DATA_SIZE ; i++)
	{
		while (this->data_contact[i].empty())
		{
			std::cout << "Insert " << getDataField(i) << ":\t";
			std::getline(std::cin, this->data_contact[i]);
			if (i == PHONE)
			{
				if (!Contact::isnum(this->data_contact[i]))
				{
					std::cout << "only accept numbers." << std::endl;
					this->data_contact[i] = "";
				}
			}
			if (std::cin.fail())
			{
				std::cerr << "\nFail to get input." << std::endl;
				exit (1);
			}
		}
	}
	if (DEBUG)
		Contact::print();
	Contact::increment();
}

bool	Contact::isnum(const std::string& s) const
{
	for (std::string::const_iterator it = s.begin(); it != s.end(); it++)
	{
		if (!std::isdigit(*it))
			return false;
	}
	return true;
}

void	Contact::print( void ) const
{
	for (int i = 0; i < DATA_SIZE; i++)
			std::cout << getDataField(i) << ": " << this->data_contact[i] << std::endl;
}

int	Contact::getIndex( void )
{
	return Contact::_index;
}

int	Contact::_index = 0;
