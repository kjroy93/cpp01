/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 18:39:59 by kjroydev          #+#    #+#             */
/*   Updated: 2026/05/26 18:40:00 by kjroydev         ###   ########.fr       */
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
