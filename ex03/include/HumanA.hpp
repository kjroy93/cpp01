/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:54:35 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/30 15:25:24 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CPP
# define HUMAN_A_CPP
# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string 	name_;
		Weapon&			weapon_;
	public:
		~HumanA();
		HumanA(std::string name, Weapon& weapon);
		void	attack();
};

#endif