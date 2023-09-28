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
