/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:54:46 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 17:54:48 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CPP
# define WEAPON_CPP
# include <iostream>
using std::string;
using std::cout;
using std::endl;

class	Weapon
{
	private:
		string type_;
	public:
		~Weapon();
		Weapon(string type);
		const string&	getType() const;
		void			setType(string type);
};

#endif