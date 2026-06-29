/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:56:13 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 17:56:15 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "DEBUG" << std::endl;
	harl.complain("DEBUG");
	std::cout << "INFO" << std::endl;
	harl.complain("INFO");
	std::cout << "WARNING" << std::endl;
	harl.complain("WARNING");
	std::cout << "ERROR" << std::endl;
	harl.complain("ERROR");
}
