/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-aga <juan-aga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:01:52 by juan-aga          #+#    #+#             */
/*   Updated: 2023/09/24 11:02:29 by juan-aga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string	megaphone(std::string str)
{
	std::string upper;
	upper.assign(str);
	for (size_t i = 0; i < upper.length() ; i++)
	{
		if (upper[i] >= 'a' && upper[i] <= 'z')
			upper[i] +=  'A' - 'a';
	}
	return (upper);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string str;
			str.assign(megaphone(av[i]));
			std::cout << str;
			if (i + 1 < ac)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
}
