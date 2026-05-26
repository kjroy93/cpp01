/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 15:05:26 by kjroydev          #+#    #+#             */
/*   Updated: 2026/05/26 17:00:10 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie	*horde;
	int		number;

	if (argc < 2)
		return (1);
	number = std::atoi(argv[1]);;
	horde = zombieHorde(number, "Tyrael");
	delete[] horde;
	return (0);
}
