/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:54:59 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 17:55:00 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(string name):
	name_(name), weapon_(NULL)
{}

HumanB::~HumanB()
{
	cout << "HumanB class is destroyed" << endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon_ = &weapon;
}

void	HumanB::attack()
{
	if (this->weapon_)
	{
		cout
		<< name_
		<< " attack with his"
		<< this->weapon_->getType()
		<< endl;
	}
	else
	{
		cout
		<< this->name_
		<< " attack with their bare hands"
		<< endl;
	}
}
