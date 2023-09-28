#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include "Data.hpp"

# ifndef SIZE
#  define SIZE 1
# endif

class  PhoneBook
{

public:
	PhoneBook( void );
	~ PhoneBook( void );

	void	add( void );

private:
	Contact	contacts[SIZE];

	void	removeFirst( void );
};

#endif
