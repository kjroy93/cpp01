/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:56:40 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/01 16:13:56 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cerr << "No arguments passed: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (1);
	}
	Harl	harl;
	harl.complain(argv[1]);
}
