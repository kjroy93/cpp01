/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 18:39:53 by kjroydev          #+#    #+#             */
/*   Updated: 2026/05/26 19:07:38 by kjroydev         ###   ########.fr       */
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