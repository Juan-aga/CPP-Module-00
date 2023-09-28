#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include "Data.hpp"

# ifndef SIZE
#  define SIZE 2
# endif

class  PhoneBook
{

public:
	PhoneBook( void );
	~ PhoneBook( void );

	void	add( void );
	void	display( void ) const;

private:
	Contact	contacts[SIZE];

	void	removeFirst( void );
	void	printFormat( std::string s) const;

};

#endif
