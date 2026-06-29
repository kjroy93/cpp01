/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:54:41 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 18:10:03 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CPP
# define HUMAN_B_CPP
# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string 	name_;
		Weapon*	weapon_;
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon& weapon);
		void	attack();
};

#endif