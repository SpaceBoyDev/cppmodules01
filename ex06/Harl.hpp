/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 00:44:04 by dario             #+#    #+#             */
/*   Updated: 2025/08/11 01:45:43 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl
{
	public:

	Harl();
	~Harl();

	void	complain(std::string level, std::string filter);

	private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};

#endif