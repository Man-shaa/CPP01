/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:08:51 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/27 19:51:29 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	main(int ac, char **av)
{
	std::string			outName = av[1];
	std::string			toFind;
	std::string			toReplace;
	std::stringstream	stream;
	std::string			line;

	// Args nb
	if (ac != 4)
		return (std::cout << "tuto : ./sed [infile] [s1] [s2]" << std::endl, 1);

	// secure open
	std::ifstream		infile(av[1]);
	if (infile.is_open() == false)
		return (std::cout << "Open failed, infiled must be created and READ perm" << std::endl, 2);

	// secure open
	outName += ".replace";
	std::ofstream		outfile((char *)outName.c_str());
	if (outfile.is_open() == false)
		return (std::cout << "Open/Creation outfile failed" << std::endl, 3);

	std::getline(infile, line, '\0');
	toFind = av[2];
	toReplace = av[3];
	size_t nPos = line.find(toFind);
	while (nPos != std::string::npos)
	{
		line.erase(nPos, toFind.length());
		line.insert(nPos, toReplace);
		nPos = line.find(toFind);
	}
	outfile << line;
	infile.close();
	outfile.close();
}
