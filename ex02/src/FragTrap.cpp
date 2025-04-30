/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:56:39 by lorey             #+#    #+#             */
/*   Updated: 2025/04/30 18:11:41 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	hit_point = 100;
	energy_point = 100;
	attack_damage = 30;
	max_hp = 200;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
	gate_mode = false;
	max_hp = 200;
}

FragTrap::FragTrap(const FragTrap &frag_trap): ClapTrap(frag_trap)
{
	this->gate_mode = frag_trap.gate_mode;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &frag_trap)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this == &frag_trap)
	{
		std::cout << "self assignement..." << std::endl;
		return *this;
	}
	this->name = frag_trap.name;
	this->hit_point = frag_trap.hit_point;
	this->max_hp = frag_trap.max_hp;
	this->energy_point = frag_trap.energy_point;
	this->attack_damage = frag_trap.attack_damage;
    return *this;
}

void	FragTrap::attack(const std::string &target)
{
	if (!is_dead)
	{
		if (energy_point > 0)
		{
			energy_point--;
			std::cout << "FragTrap " << name
			<< " attacked " << target
			<< " causing " << attack_damage
			<< " point of damage!"
			<< std::endl;
		}
		else
			std::cout << "FragTrap " << name
			<< " cannot attack because of lack of energy"
			<< std::endl;
	}
	else
		std::cout << "FragTrap " << name
		<< " is dead and therefore cannot perform any actionm"
		<< std::endl;
}

void	FragTrap::highFivesGuys()
{
		std::cout << "Hey guys ! Let's high five" << std::endl;
}
