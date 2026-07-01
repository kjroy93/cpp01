/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:54:27 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/01 16:08:53 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string var = "HI THIS IS BRAIN";
	std::string	*stringPTR = &var;
	std::string& stringREF = var;

	std::cout << "&var		(the addres of var): "		<< &var << std::endl;
	std::cout << "&stringREF	(the addres of ref): "	<< &stringREF << std::endl;
	std::cout << "&stringPTR	(the addres of ptr): "	<< stringPTR << std::endl;
	std::cout << " \n";
	std::cout << "var		(the content of var): "	<< var << std::endl;
	std::cout << "stringREF	(the content of ref): "	<< stringREF << std::endl;
	std::cout << "stringPTR	(the content of ptr): "	<< stringPTR << std::endl;
}
