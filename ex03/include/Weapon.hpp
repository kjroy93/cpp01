/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:54:46 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 18:07:15 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CPP
# define WEAPON_CPP
# include <iostream>

class	Weapon
{
	private:
		std::string type_;
	public:
		~Weapon();
		Weapon(std::string type);
		const std::string&	getType() const;
		void			setType(std::string type);
};

#endif