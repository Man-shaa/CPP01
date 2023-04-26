/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:30:02 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/26 19:43:36 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie z1("Mateo");
	Zombie *ptr = NULL;

	z1.randomChump("Manuel");
	ptr = ptr->newZombie("ptr");
	// ptr->announce();
	return (0);
}
