/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:51:10 by dario             #+#    #+#             */
/*   Updated: 2025/08/10 21:32:40 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

bool		file_exists(const std::string &fileName)
{
	std::ifstream file(fileName.c_str());
	return (file.good());
}

std::string	replace_string(const std::string &line,
				const std::string &s1, const std::string &s2)
{
	std::string				replacedString;
	std::string::size_type	found;
	std::string::size_type	res = 0;

	while ((found = line.find(s1, res)) != std::string::npos)
	{
		replacedString.append(line.substr(res, found - res));
		replacedString.append(s2);
		res = found + s1.length();
	}
	replacedString.append(line.substr(res));
	return (replacedString);
}

bool		read_replace(const std::string &fileName,
				const std::string &s1, const std::string &s2)
{
	std::string		line;
	std::string		fileNameReplace = fileName + ".replace";
	std::ifstream	in_file(fileName.c_str());
	std::ofstream	out_file(fileNameReplace.c_str());

	if (!in_file || !out_file)
		return (false);

	while (getline(in_file, line))
	{
		std::string replacedString = replace_string(line, s1, s2);
		out_file << replacedString << std::endl;
		//std::cout << line << std::endl;
	}
	return (true);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Execute like this: './sed_is_for_losers <filename> <s1> <s2>'"
			<< std::endl;
		return (0);
	}
	
	if (!file_exists(argv[1]))
	{
		std::cout << "File does not exist"
			<< std::endl;
		return (0);
	}

	if (!read_replace(argv[1], argv[2], argv[3]))
	{
		std::cout << "Failed creation of files"
			<< std::endl;
		return (0);
	}

	std::cout << "New file with replaced strings created"
		<< std::endl;

	return (0);
}