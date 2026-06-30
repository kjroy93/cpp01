/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:55:42 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/30 16:12:04 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	replace(const std::string& filename, const std::string s1, const std::string s2)
{
	size_t			pos;
	std::string		line;
	std::ifstream	input;
	std::ofstream	output;
	int				answer;
	std::string		new_file;

	input.open(filename.c_str());
	exit_error(input, "Input file could not be opened");
	answer = check_file_content(input);
	if (!answer)
		return (1);
	new_file = filename + ".replace";
	output.open(new_file.c_str());
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

bool	check_file_content(std::ifstream& input)
{
	input.seekg(0, std::ios::end);
	if (input.tellg() == 0)
	{
		std::cerr << "The file it's empty" << std::endl;
		return (false);
	}
	input.seekg(0, std::ios::beg);
	return (true);
}

void	exit_error(std::ios& filestream, const std::string& message)
{
	if (!filestream)
	{
		std::cerr << message << std::endl;
		exit(1);
	}
}
