#ifndef CONTACT_H
# define CONTACT_H
# include <string>
# include "Data.hpp"

class Contact
{

public:
	Contact( void );
	~Contact( void );

	void		add( void );
	void		print( void ) const;
	std::string	getInfoContact( int index ) const;

	static int	getIndex( void );

private:
	std::string _data_contact[DATA_SIZE];
	
	static int	_index;
	
	static void	_increment( void );
};

#endif
