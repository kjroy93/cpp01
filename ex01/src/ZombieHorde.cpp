/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 15:05:22 by kjroydev          #+#    #+#             */
/*   Updated: 2026/06/23 20:01:52 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
using std::stringstream;

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie			*zombies;
	std::string		new_name;
	stringstream	ss;
	int				i;

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
