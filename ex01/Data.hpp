#ifndef DATA_HPP
# define DATA_HPP

enum Data
{
	F_NAME,
	L_NAME,
	NICK,
	PHONE,
	SECRET,
	DATA_SIZE
};

const char * getDataField( int index );

#endif
