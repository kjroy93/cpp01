/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:55:04 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 17:55:06 by kmarrero         ###   ########.fr       */
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
