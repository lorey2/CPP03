/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 22:18:39 by lorey             #+#    #+#             */
/*   Updated: 2025/04/30 23:05:04 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("ClapTrap_name")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	hit_point = FragTrap::hit_point;
	energy_point = ScavTrap::energy_point;
	attack_damage = FragTrap::attack_damage;
	max_hp = 200;
	this->name = ClapTrap::name + "_clap_name";
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name)
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
	hit_point = FragTrap::hit_point;
	energy_point = ScavTrap::energy_point;
	attack_damage = FragTrap::attack_damage;
	max_hp = 200;
	this->name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond_trap): ClapTrap(diamond_trap), ScavTrap(diamond_trap), FragTrap(diamond_trap)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->name = diamond_trap.name;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &diamond_trap)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if (this == &diamond_trap)
	{
		std::cout << "self assignement..." << std::endl;
		return *this;
	}
	this->name = diamond_trap.name;
	this->hit_point = diamond_trap.hit_point;
	this->max_hp = diamond_trap.max_hp;
	this->energy_point = diamond_trap.energy_point;
	this->attack_damage = diamond_trap.attack_damage;
    return *this;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout	<< "DiamondTrap name :"
				<< name << std::endl
				<< "From ClapTrap name :"
				<< ClapTrap::name << std::endl;
}
