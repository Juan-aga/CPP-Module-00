#ifndef DATA_HPP
# define DATA_HPP

# include <string>

enum Data
{
	F_NAME,
	L_NAME,
	NICK,
	PHONE,
	SECRET,
	DATA_SIZE
};

const char *	getDataField( int index );
bool			isnum(const std::string& s);
int	strToInt( const std::string& s);

#endif
