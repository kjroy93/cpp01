/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:55:46 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/30 16:11:03 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP
# include <iostream>
# include <fstream>
# include <cstdlib>

bool	check_file_content(std::ifstream& input);
void	exit_error(std::ios& filestream, const std::string& message);
int		replace(const std::string& filename, const std::string s1, const std::string s2);

#endif