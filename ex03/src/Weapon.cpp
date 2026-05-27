/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 18:40:02 by kjroydev          #+#    #+#             */
/*   Updated: 2026/05/27 20:28:28 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const string&	Weapon::getType() const
{
	return (type_);
}

void	Weapon::setType(string type)
{
	this->type_ = type;
}

Weapon::Weapon(string type)
{
	this->type_ = type;
}

Weapon::~Weapon()
{
	cout << "Weapon class is destroyed" << endl;
}
