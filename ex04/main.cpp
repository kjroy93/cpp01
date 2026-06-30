/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:55:36 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/30 15:15:48 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	main(int argc, char *argv[])
{
	int	answer;

	if (argc < 4)
	{
		std::cerr << "Error: you need to provide three arguments:"
		<< " ./replace,"
		<< "<filename>,"
		<< "<string1>,"
		<< "<string2>\n";
		return (1);
	}
	answer = replace(argv[1], argv[2], argv[3]);
	return (answer);
}
