/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:54:59 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 18:08:53 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name):
	name_(name), weapon_(NULL)
{}

HumanB::~HumanB()
{
	std::cout << "HumanB class is destroyed" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon_ = &weapon;
}

void	HumanB::attack()
{
	if (this->weapon_)
	{
		std::cout
		<< name_
		<< " attacks with his"
		<< this->weapon_->getType()
		<< std::endl;
	}
	else
	{
		std::cout
		<< this->name_
		<< " attacks with their bare hands"
		<< std::endl;
	}
}
