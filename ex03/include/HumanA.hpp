/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 18:39:48 by kjroydev          #+#    #+#             */
/*   Updated: 2026/05/26 19:46:02 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CPP
# define HUMAN_A_CPP
# include <iostream>
# include "Weapon.hpp"
using	std::string;

class	HumanA
{
	private:
		string 	name_;
		Weapon	*weapon_;
	public:
		HumanA();
		~HumanA();
		void	setWeapon(Weapon &weapon);
		void	attack();
};

#endif