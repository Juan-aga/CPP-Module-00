#include "Data.hpp"

static const char * EnumData[DATA_SIZE] = {
	"first name",
	"last name",
	"nickname",
	"phone number",
	"darkest secret"
	};

const char * getDataField( int index )
{
	return EnumData[index];
}

bool	isnum( const std::string& s )
{
	if (s.empty())
		return false;
	for (std::string::const_iterator it = s.begin(); it != s.end(); it++)
	{
		if (!std::isdigit(*it))
			return false;
	}
	return true;
}

int	strToInt( const std::string& s)
{
	int	num;

	num = 0;
	for (int i = 0; s[i]; i++)
	{
		num *= 10;
		num += s[i] - '0';
	}
	return num;
}
