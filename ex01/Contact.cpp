#include <iostream>
#include "Contact.hpp"
#include <climits>
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
	if (DEBUG)
		std::cout << "Add to " << Contact::_index << std::endl;
	for (int i = 0; i < DATA_SIZE ; i++)
	{
		std::cout << "Insert " << getDataField(i) << " : " << std::endl;
		std::getline(std::cin, this->data_contact[i]);
		if (std::cin.fail())
		{
			std::cerr << "Fail to get input." << std::endl;
			exit (1);
		}
	}
	if (DEBUG)
	{
		for (int i = 0; i < DATA_SIZE; i++)
		{
			std::cout << getDataField(i) << " is " << data_contact[i] << std::endl;
		}
	}
	Contact::increment();
}

int	Contact::getIndex( void )
{
	return Contact::_index;
}

int	Contact::_index = 0;
