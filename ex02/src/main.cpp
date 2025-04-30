/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 01:59:45 by lorey             #+#    #+#             */
/*   Updated: 2025/04/30 18:09:48 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	test_clap_trap(void)
{
	ClapTrap test("CLAPCALP");
	test.displayInfo();
	test.attack("oui");
	test.takeDamage(3);
	test.displayInfo();
	test.beRepaired(5);
	test.displayInfo();
	test.takeDamage(32);
	test.attack("oui");
	test.displayInfo();
}

void	test_scav_trap(void)
{
	ScavTrap test2("SCAAAAV");
	test2.displayInfo();
	test2.attack("oui");
	test2.takeDamage(3);
	test2.displayInfo();
	test2.beRepaired(5);
	test2.displayInfo();
	test2.takeDamage(32);
	test2.attack("oui");
	test2.guardGate();
	test2.displayInfo();
	test2.guardGate();
}

void	test_frag_trap(void)
{
	FragTrap test3("Noscope");
	test3.displayInfo();
	test3.attack("oui");
	test3.takeDamage(3);
	test3.displayInfo();
	test3.beRepaired(5);
	test3.displayInfo();
	test3.takeDamage(32);
	test3.attack("oui");
	test3.displayInfo();
	test3.highFivesGuys();
}

void	draw_separation(void)
{
	std::cout	<< "\n\n"
				<< "//////////////////////////////"
				<< "\n\n"
				<<std::endl;
}




int	main(void)
{
	test_clap_trap();
	draw_separation();
	test_scav_trap();
	draw_separation();
	test_frag_trap();
}
