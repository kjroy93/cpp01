/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 17:05:18 by kjroydev          #+#    #+#             */
/*   Updated: 2026/05/26 17:24:07 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string var = "HI THIS IS BRAIN";
	std::string	*stringPTR = &var;
	std::string &stringREF = var;

	std::cout << "&var		(the addres of var): " << &var << std::endl;
	std::cout << "&stringREF	(the addres of ref): " << &stringREF << std::endl;
	std::cout << "&stringPTR	(the addres of ptr): " << &stringPTR << std::endl;
	std::cout << " \n";
	std::cout << "var		(the content of var):		" << var << std::endl;
	std::cout << "stringREF	(the content of ref):		" << stringREF << std::endl;
	std::cout << "stringPTR	(the content of ptr):		" << stringPTR << std::endl;
}
