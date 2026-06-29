/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:55:42 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/29 17:55:44 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	replace(const std::string filename, std::string s1, std::string s2)
{
	size_t			pos;
	std::string		result;
	std::string		line;
	std::ifstream	input;
	std::ofstream	output;
	std::string		new_file;

	input.open(filename.c_str());
	exit_error(input, "Input file could not be opened");
	new_file = filename + ".replace";
	output.open(new_file.c_str());
	exit_error(output, "Output file could not be opened");
	if (!output)
	{
		std::cerr << "Error opening file" << std::endl;
		return (1);
	}
	while (std::getline(input, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
		output << line << std::endl;
	}
	input.close();
	output.close();
	return (0);
}

void	exit_error(std::ios& filestream, const std::string& message)
{
	if (!filestream)
	{
		std::cerr << message << std::endl;
		exit(1);
	}
}
