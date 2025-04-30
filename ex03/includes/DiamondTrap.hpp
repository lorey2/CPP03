/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 22:18:09 by lorey             #+#    #+#             */
/*   Updated: 2025/04/30 22:59:47 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(); //DONE
		DiamondTrap(std::string name);
		~DiamondTrap(); //DONE
		DiamondTrap(const DiamondTrap &diamond_trap); //DONE
		DiamondTrap& operator=(const DiamondTrap &diamond_trap); //DONE
		void	attack(const std::string &target);  //DONE
		void	whoAmI();  //DONE
	private:
		std::string name;
};
#endif
