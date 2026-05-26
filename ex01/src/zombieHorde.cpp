/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 15:05:22 by kjroydev          #+#    #+#             */
/*   Updated: 2026/05/26 16:32:30 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
using std::stringstream;

Zombie	*zombieHorde(int n, string name)
{
	Zombie			*zombies;
	string			new_name;
	stringstream	ss;
	int				i;

	i = 0;
	zombies = new Zombie[n];
	while (i < n)
	{
		ss.str("");
		ss << " " << i + 1;
		new_name = name + ss.str();
		zombies[i].set_name(new_name);
		zombies[i].announce();
		i++;
	}
	return (zombies);
}
