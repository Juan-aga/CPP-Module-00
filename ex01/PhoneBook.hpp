#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include "Data.hpp"

# ifndef SIZE
#  define SIZE 8
# endif

class  PhoneBook
{

public:
	PhoneBook( void );
	~ PhoneBook( void );

	Contact	contacts[SIZE];

private:

};

#endif
