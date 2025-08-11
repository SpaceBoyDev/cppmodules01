/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 00:44:02 by dario             #+#    #+#             */
/*   Updated: 2025/08/11 01:43:45 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
	typedef void (Harl::*ptrToFunc)();
	std::string levels[] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	ptrToFunc funcs[] =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	int	i = 0;
	while (i < 5 && levels[i] != level)
		++i;
	if (i < 5)
		(this->*funcs[i])();
	else
		std::cout << "Invalid level" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]"
		<< " "
		<< "Wakala que risa hamburgesa"
		<< std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]"
		<< " "
		<< "eee cuesta dinero ponerle más pepis"
		<< std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]"
		<< " "
		<< "me merezco 10000 pepis"
		<< std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]"
		<< " "
		<< "se me ha roto la hamburguesa"
		<< std::endl;
}
