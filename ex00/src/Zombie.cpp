/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:14:23 by kjroydev          #+#    #+#             */
/*   Updated: 2026/05/26 14:18:31 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	cout << this->name << ":" << " BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie():
	name("Foo")
{}

Zombie::~Zombie()
{
	cout << this->name << " is destroyed" << endl;
}

Zombie::Zombie(string name_)
{
	name = name_;
}
