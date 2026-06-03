/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 19:07:09 by kjroydev          #+#    #+#             */
/*   Updated: 2026/06/03 19:57:28 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
# define HARL_CPP
# include <iostream>
using	std::string;

class	Harl
{
	private:
		void	info(void);
		void	error(void);
		void	debug(void);
		void	warning(void);
	public:
		Harl();
		void	complain(string level);
};

#endif