/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 18:39:56 by kjroydev          #+#    #+#             */
/*   Updated: 2026/06/03 20:24:55 by kjroydev         ###   ########.fr       */
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
