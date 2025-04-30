/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:13:23 by lorey             #+#    #+#             */
/*   Updated: 2025/04/30 18:02:03 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
	max_hp = 200;
	gate_mode = false;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
	gate_mode = false;
	max_hp = 200;
}

ScavTrap::ScavTrap(const ScavTrap &scav_trap): ClapTrap(scav_trap)
{
	this->gate_mode = scav_trap.gate_mode;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scav_trap)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this == &scav_trap)
	{
		std::cout << "self assignement..." << std::endl;
		return *this;
	}
	this->name = scav_trap.name;
	this->hit_point = scav_trap.hit_point;
	this->max_hp = scav_trap.max_hp;
	this->energy_point = scav_trap.energy_point;
	this->attack_damage = scav_trap.attack_damage;
    return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (!is_dead)
	{
		if (energy_point > 0)
		{
			energy_point--;
			std::cout << "ScavTrap " << name
			<< " attacked " << target
			<< " causing " << attack_damage
			<< " point of damage!"
			<< std::endl;
		}
		else
			std::cout << "ScavTrap " << name
			<< " cannot attack because of lack of energy"
			<< std::endl;
	}
	else
		std::cout << "ScavTrap " << name
		<< " is dead and therefore cannot perform any actionm"
		<< std::endl;
}

void	ScavTrap::guardGate()
{
	if (!is_dead)
	{
		if (energy_point > 0)
		{
			energy_point--;
			if (gate_mode)
			{
				std::cout << "ScavTrap stopped guarding the gate" << std::endl;
				gate_mode = false;
			}
			else
			{
				std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
					gate_mode = true;
			}
		}
		else
			std::cout << "ScavTrap " << name
			<< " cannot attack because of lack of energy"
			<< std::endl;
	}
	else
		std::cout << "ScavTrap " << name
		<< " is dead and therefore cannot perform any actionm"
		<< std::endl;

}
