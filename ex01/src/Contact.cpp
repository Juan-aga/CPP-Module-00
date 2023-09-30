#include <iostream>
#include "Contact.hpp"

Contact::Contact( void )
{
	if (DEBUG)
		std::cout << "Constructor " << Contact::_index << " Contact" << std::endl;
}

Contact::~Contact( void )
{
	for (int i = 0; i < DATA_SIZE; i++)
		this->_data_contact[i].clear();
	Contact::_index -= 1;
	if (DEBUG)
		std::cout << "Destructor " << Contact::_index << " Contact" << std::endl;
}

void	Contact::_increment( void )
{
	if (DEBUG)
		std::cout << "Contact " << Contact::_index << " added" << std::endl;
	Contact::_index +=1;
}

void	Contact::add( void )
{
	if (DEBUG)
		std::cout << "Add to " << Contact::_index << std::endl;
	for (int i = 0; i < DATA_SIZE ; i++)
	{
		while (this->_data_contact[i].empty())
		{
			std::cout << "Insert " << getDataField(i) << ":\t";
			std::getline(std::cin, this->_data_contact[i]);
			if (std::cin.fail())
			{
				std::cout << std::endl;
				if (DEBUG)
					std::cerr << "EOF in contact add." << std::endl;
				return ;
			}
			if (i == PHONE)
			{
				if (!isnum(this->_data_contact[i]))
				{
					std::cout << "only accept numbers." << std::endl;
					this->_data_contact[i] = "";
				}
			}
			if (std::cin.fail())
				return ;
		}
	}
	if (DEBUG)
		Contact::print();
	Contact::_increment();
}

std::string	Contact::getInfoContact( int index ) const
{
	if (index >= DATA_SIZE || index < 0)
	{
		std::cerr << "Info Contact out of range." << std::endl;
		return "";
	}
	return _data_contact[index];
}

void	Contact::print( void ) const
{
	for (int i = 0; i < DATA_SIZE; i++)
			std::cout << getDataField(i) << ": " << this->_data_contact[i] << std::endl;
}

int	Contact::getIndex( void )
{
	return Contact::_index;
}

int	Contact::_index = 0;
