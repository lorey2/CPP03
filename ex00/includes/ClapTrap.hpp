/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:53:56 by lorey             #+#    #+#             */
/*   Updated: 2025/04/25 01:53:46 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <iomanip>
# include <string>

class ClapTrap
{
	private:
		std::string	name;
		int			hit_point;
		int			max_hp;
		int			energy_point;
		int			attack_damage;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &clap_trap);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap &clap_trap);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	displayInfo(void);
};

#endif
