/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 00:44:06 by dario             #+#    #+#             */
/*   Updated: 2025/08/11 01:54:04 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);

	Harl harl;

	harl.complain("DEBUG", argv[1]);
	harl.complain("INFO", argv[1]);
	harl.complain("WARNING", argv[1]);
	harl.complain("ERROR", argv[1]);
	harl.complain("io", argv[1]);


}