/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 22:44:02 by dario             #+#    #+#             */
/*   Updated: 2025/08/08 23:21:34 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	int	n = 5;
	Zombie *horde = zombieHorde(n, "hola");

	for (int i = 0; i < n; i++)
		horde[i].announce();

	for (int i = 0; i < n; i++)
		delete &horde[i];
	
	return (0);	
}