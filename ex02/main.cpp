/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 23:32:07 by dario             #+#    #+#             */
/*   Updated: 2025/08/08 23:44:48 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	string = "*HI THIS IS BRAIN*";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Memory address of the string variable:\t"
		<< &string << std::endl;
	std::cout << "Memory address held by stringPTR:\t"
		<< stringPTR << std::endl;
	std::cout << "Memory address of the stringREF:\t"
		<< &stringREF << std::endl << std::endl;

	std::cout << "Value of the string variable:\t\t"
		<< string << std::endl;
	std::cout << "Value pointed to by stringPTR:\t\t"
		<< *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF:\t\t"
		<< stringREF << std::endl;
	
	return (0);
}