/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:54:14 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 17:54:16 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char *argv[])
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
