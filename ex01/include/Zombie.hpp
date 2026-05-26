/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:15:59 by kjroydev          #+#    #+#             */
/*   Updated: 2026/05/26 16:59:47 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <cstdlib>
using std::cout;
using std::endl;
using std::string;

class	Zombie
{
	private:
		string name;
	public:
		Zombie();
		Zombie(string name_);
		~Zombie();
		void	announce(void);
		void	set_name(string name_);
};

Zombie	*zombieHorde(int n, string name);

#endif