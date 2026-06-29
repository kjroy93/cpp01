/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:56:40 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 17:56:42 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc < 2)
		std::cerr << "No arguments passed: DEBUG, INFO, WARNING, ERROR\n" << std::endl;
	Harl	harl;
	harl.complain(argv[1]);
}
