/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:55:46 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 17:55:48 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP
# include <iostream>
# include <fstream>
# include <cstdlib>

int		replace(std::string filename, std::string s1, std::string s2);
void	exit_error(std::ios& filestream, const std::string& message);

#endif