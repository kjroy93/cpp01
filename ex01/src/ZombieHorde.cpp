/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:53:39 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 17:53:45 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie				*zombies;
	std::string			new_name;
	std::stringstream	ss;
	int					i;

	i = 0;
	zombies = new Zombie[n];
	while (i < n)
	{
		ss.str("");
		ss << " " << i + 1;
		new_name = name + ss.str();
		zombies[i].setName(new_name);
		zombies[i].announce();
		i++;
	}
	return (zombies);
}
