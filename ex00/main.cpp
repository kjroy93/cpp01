/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:14:26 by kjroydev          #+#    #+#             */
/*   Updated: 2026/05/26 13:45:01 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	foo;
	Zombie	chuck("Chuck");
	Zombie	*fred;

	foo.announce();
	chuck.announce();
	fred = newZombie("Fred");
	fred->announce();
	delete fred;
	randomChump("Chump");
}
