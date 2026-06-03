/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 20:37:57 by kjroydev          #+#    #+#             */
/*   Updated: 2026/06/03 19:02:39 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	replace(const string filename, string s1, string s2)
{
	size_t			pos;
	string			line;
	std::ifstream	input;
	std::ofstream	output;
	string			new_file;

	input.open(filename.c_str());
	exit_error(input, "Input file could not be opened");
	new_file = filename + ".replace";
	output.open(new_file.c_str());
	exit_error(output, "Output file could not be opened");
	if (!output)
	{
		std::cerr << "Error opening file" << std::endl;
		exit(1);
	}
	while (std::getline(input, line))
	{
		pos = line.find(s1);
		if (pos != string::npos)
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
		output << line << std::endl;
	}
}

void	exit_error(std::ios& filestream, const string& message)
{
	if (!filestream)
	{
		std::cerr << message << std::endl;
		exit(1);
	}
}
