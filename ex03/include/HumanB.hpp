/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 18:39:51 by kjroydev          #+#    #+#             */
/*   Updated: 2026/05/26 19:12:30 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CPP
# define HUMAN_B_CPP
# include <iostream>
# include "Weapon.hpp"
using	std::string;

class	HumanB
{
	private:
		string 	name_;
		Weapon	*weapon_;
	public:
		HumanB();
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void	attack();
};

#endif