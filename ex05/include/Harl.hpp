/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:56:01 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 17:56:03 by kmarrero         ###   ########.fr       */
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