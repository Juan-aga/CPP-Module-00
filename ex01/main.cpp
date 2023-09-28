#include "Contact.hpp"
#include <iostream>
#include <map>

int	main( void )
{
/*
	std::map <std::string, std::string> info{{"a", "is a"}};
	std::cout << "mapa a es: " << info.begin()->first << " = " << info.begin()->second << std::endl;
	*/
/*	std::string	s1;

//	s1.clear();
	s1 = "";
	std::cout << "S1 es: " << s1 << std::endl;
	std::cout << "empty es: " << s1.empty() << std::endl;
	std::cout << "len es: " << s1.length() << std::endl;

*/	Contact prueba[8];
	int	i;
	int inst;

	inst = Contact::getIndex();
	if (DEBUG)
		std::cout << "Start index: " << inst << std::endl;

	i = 0;
	while (Contact::getIndex() < 8) 
	{
		prueba[i].add();
		i++;
	}
	i--;
	prueba[i].~Contact();
	return (0);
}
