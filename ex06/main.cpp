/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 19:49:19 by kjroydev          #+#    #+#             */
/*   Updated: 2026/06/03 20:10:32 by kjroydev         ###   ########.fr       */
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
