/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:53:02 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 17:53:04 by kmarrero         ###   ########.fr       */
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
