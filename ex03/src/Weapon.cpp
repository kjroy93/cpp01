/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:55:04 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 18:07:40 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::getType() const
{
	return (type_);
}

void	Weapon::setType(std::string type)
{
	this->type_ = type;
}

Weapon::Weapon(std::string type)
{
	this->type_ = type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon class is destroyed" << std::endl;
}
