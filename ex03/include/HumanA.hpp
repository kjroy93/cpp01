/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:54:35 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 17:54:37 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CPP
# define HUMAN_A_CPP
# include <iostream>
# include "Weapon.hpp"
using	std::string;
using	std::cout;
using	std::endl;

class	HumanA
{
	private:
		string 	name_;
		Weapon &weapon_;
	public:
		~HumanA();
		HumanA(string name, Weapon& weapon);
		void	attack();
};

#endif