/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:54:52 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 17:54:54 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(string name, Weapon& weapon):
	name_(name), weapon_(weapon)
{}

void	HumanA::attack()
{
	cout << name_
	<< " attacks with their"
	<< this->weapon_.getType()
	<< endl;
}

HumanA::~HumanA()
{
	cout << "HumanA class is destroyed" << endl;
}
