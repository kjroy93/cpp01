/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:15:59 by kjroydev          #+#    #+#             */
/*   Updated: 2026/06/23 19:59:57 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <cstdlib>

class	Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string name_);
		~Zombie();
		void	announce(void);
		void	setName(std::string name_);
};

Zombie	*zombieHorde(int n, std::string name);

#endif