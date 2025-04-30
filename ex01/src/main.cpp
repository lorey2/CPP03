/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 01:59:45 by lorey             #+#    #+#             */
/*   Updated: 2025/04/30 23:35:19 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	test_clap_constructors()
{
	std::cout	<< "/////////////////////////////" << std::endl
				<< "//TEST CONSTRUCTOR CLAPTRAP//" << std::endl
				<< "/////////////////////////////" << std::endl;
	ClapTrap c1;
	c1.displayInfo();
	ClapTrap c2(c1);
	c2.takeDamage(5);
	c2.displayInfo();
	c2 = c1;
	c2.displayInfo();
	std::cout	<< "/////////////////////////////" << std::endl
				<< "///END TEST                //" << std::endl
				<< "/////////////////////////////" << std::endl;
}

void	test_scav_constructors()
{
	std::cout	<< "/////////////////////////////" << std::endl
				<< "//TEST CONSTRUCTOR SCAVTRAP//" << std::endl
				<< "/////////////////////////////" << std::endl;
	ScavTrap c1;
	c1.displayInfo();
	ScavTrap c2(c1);
	c2.takeDamage(5);
	c2.displayInfo();
	c2 = c1;
	c2.displayInfo();
	std::cout	<< "/////////////////////////////" << std::endl
				<< "///END TEST                //" << std::endl
				<< "/////////////////////////////" << std::endl;
}

void	test_clap_trap(void)
{
	test_clap_constructors();
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
	test_scav_constructors();
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
}
