/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:53:19 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 17:53:50 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <cstdlib>
# include <sstream>

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