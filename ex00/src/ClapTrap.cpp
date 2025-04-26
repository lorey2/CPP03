/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:52:54 by lorey             #+#    #+#             */
/*   Updated: 2025/04/26 23:46:05 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor called" << std::endl;
	this->name = name;
	hit_point = 10;
	max_hp = 20;
	energy_point = 10;
	attack_damage = 0;
	is_dead = false;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap_trap)
{
	std::cout << "Copy constructor called" << std::endl;
	this->name = clap_trap.name;
	this->attack_damage = clap_trap.attack_damage;
	this->hit_point= clap_trap.hit_point;
	this->energy_point = clap_trap.energy_point;
	this->max_hp = clap_trap.max_hp;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &clap_trap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &clap_trap)
	{
		std::cout << "self assignement..." << std::endl;
		return *this;
	}
	this->name = clap_trap.name;
	this->hit_point = clap_trap.hit_point;
	this->max_hp = clap_trap.max_hp;
	this->energy_point = clap_trap.energy_point;
	this->attack_damage = clap_trap.attack_damage;
    return *this;
}

void	ClapTrap::attack(const std::string &target)
{
	if (!is_dead)
	{
		if (energy_point > 0)
		{
			energy_point--;
			std::cout << "ClapTrap " << name
			<< " attacked " << target
			<< " causing " << attack_damage
			<< " point of damage!"
			<< std::endl;
		}
		else
			std::cout << "ClapTrap " << name
			<< " cannot attack because of lack of energy"
			<< std::endl;
	}
	else
		std::cout << "ClapTrap " << name
		<< " is dead and therefor cannot perform any actionm"
		<< std::endl;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!is_dead)
	{
		if (energy_point > 0)
		{
			energy_point--;
			hit_point += amount;
			if (hit_point > max_hp)
				hit_point = max_hp;
			std::cout << "ClapTrap " << name
			<< " repairs itself, gaigning " << amount
			<< " hp. He has now " << hit_point
			<< " pv!"
			<< std::endl;
		}
		else
			std::cout << "ClapTrap " << name 
			<< " cannot be repaired because of lack of energy"
			<< std::endl;
	}
	else
		std::cout << "ClapTrap " << name
		<< " is dead and therefor cannot perform any actionm"
		<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!is_dead)
	{
		hit_point -= amount;
		if (hit_point <= 0)
		{
			hit_point = 0;
			std::cout << "ClapTrap " << name
			<< " received " << amount
			<< " damage. He is dead "
			<< std::endl;
		}
		else
		{
			std::cout << "ClapTrap " << name
			<< " received " << amount
			<< " damage. He has now " << hit_point
			<< " pv!"
			<< std::endl;
		}
	}
	else
		std::cout << "ClapTrap " << name
		<< " is dead and therefor cannot perform any actionm"
		<< std::endl;
}

void	ClapTrap::displayInfo(void)
{
	std::cout
	<< "name: " << name << std::endl
	<< "hit_points: " << hit_point << std::endl
	<< "max_hp: " << max_hp << std::endl
	<< "energy: " << energy_point << std::endl
	<< "attack damage: " << attack_damage << std::endl
	<< "is_dead: " << is_dead << std::endl;
}

