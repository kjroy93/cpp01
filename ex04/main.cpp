/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 20:58:06 by kjroydev          #+#    #+#             */
/*   Updated: 2026/05/27 21:50:36 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	main(int argc, char *argv[])
{
	if (argc < 4)
	{
		std::cerr << "Error: you need to provide three arguments:"
		<< " ./replace,"
		<< "<filename>,"
		<< "<string1>,"
		<< "<string2>\n";
		return (1);
	}
	replace(argv[1], argv[2], argv[3]);
	return (0);
}
