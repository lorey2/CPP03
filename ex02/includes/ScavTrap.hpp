/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:13:22 by lorey             #+#    #+#             */
/*   Updated: 2025/04/30 17:35:10 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(); //DONE
		ScavTrap(std::string name);
		~ScavTrap(); //DONE
		ScavTrap(const ScavTrap &scav_trap); //DONE
		ScavTrap& operator=(const ScavTrap &scav_trap); //DONE
		void	attack(const std::string &target);  //DONE
		void	guardGate();  //DONE
	private:
		bool	gate_mode;
};
#endif
