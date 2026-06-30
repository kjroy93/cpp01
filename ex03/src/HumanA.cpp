/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:54:52 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/30 15:27:20 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):
	name_(name), weapon_(weapon)
{}

void	HumanA::attack()
{
	std::cout << name_
	<< " attacks with their "
	<< this->weapon_.getType()
	<< std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA class is destroyed" << std::endl;
}
