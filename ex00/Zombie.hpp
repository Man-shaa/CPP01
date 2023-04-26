/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:26:58 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/26 19:35:02 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(std::string name);
		~Zombie(void);
		void		announce(void);
		Zombie*		newZombie(std::string name);
		void		randomChump(std::string name);
};

#endif
