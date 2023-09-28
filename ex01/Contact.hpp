#ifndef CONTACT_H
# define CONTACT_H
# include <string>
# include "Data.hpp"

class Contact
{

public:
	Contact( void );
	~Contact( void );

	void	add( void );

	static int	getIndex( void );

private:
	std::string data_contact[DATA_SIZE];
	static int	_index;

	static void	increment( void );

};

#endif
