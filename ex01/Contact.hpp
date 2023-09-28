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
	std::string data_contact[DATA_SIZE];
	
	static int	_index;
	
	bool		isnum(const std::string& s) const;
	
	static void	increment( void );
};

#endif
