/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:52:56 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 17:52:58 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie():
	name("Foo")
{}

Zombie::~Zombie()
{
	std::cout << this->name << " is destroyed" << std::endl;
}

Zombie::Zombie(std::string name_)
{
	name = name_;
}
