/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 20:35:45 by kjroydev          #+#    #+#             */
/*   Updated: 2026/05/27 21:28:32 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP
# include <iostream>
# include <fstream>
# include <cstdlib>
using std::string;

void	replace(string filename, string s1, string s2);
void	exit_error(std::ios& filestream, const string& message);

#endif