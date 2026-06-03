/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 19:11:23 by kjroydev          #+#    #+#             */
/*   Updated: 2026/06/03 20:13:26 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

void	Harl::debug()
{
	std::cout << "I love having extra bacon"
	<< " for my 7XL-double-cheese-triple-pickle-special ketchup burger."
	<< " I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money." 
	<< " You didn’t put enough bacon in my burger!"
	<< " If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free."
	<< " I’ve been coming for years,"
	<< " whereas you started working here just last month."
	<< std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(string level)
{
	string	levels[4] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			switch(i)
			{
				case 0:
					std::cout << "[ DEBUG ]\n";
					debug();
					std::cout << "\n";
					/* fall through */
				case 1:
					std::cout << "[ INFO ]\n";
					info();
					std::cout << "\n";
					/* fall through */
				case 2:
					std::cout << "[ WARNING ]\n";
					warning();
					std::cout << "\n";
					/* fall through */
				case 3:
					std::cout << "[ ERROR ]\n";
					error();
					std::cout << "\n";
					/* fall through */
			}
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}
