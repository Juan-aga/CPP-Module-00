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

	void	add( void );
	void	display( void ) const;

private:
	Contact	_contacts[SIZE];

	void	_removeFirst( void );
	void	_printFormat( std::string s) const;

};

#endif
