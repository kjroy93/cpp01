/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:15:59 by kjroydev          #+#    #+#             */
/*   Updated: 2026/05/26 14:11:15 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
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
};

Zombie	*newZombie(string name);
void	randomChump(string name);

#endif