/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 01:59:45 by lorey             #+#    #+#             */
/*   Updated: 2025/05/02 14:29:32 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	test_clap_constructors()
{
	std::cout	<< "\033[33m/////////////////////////////" << std::endl
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
	std::cout	<< "\033[33m/////////////////////////////" << std::endl
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

void	test_frag_constructors()
{
	std::cout	<< "\033[33m/////////////////////////////" << std::endl
				<< "//TEST CONSTRUCTOR FRAGTRAP//" << std::endl
				<< "/////////////////////////////" << std::endl;
	FragTrap c1;
	c1.displayInfo();
	FragTrap c2(c1);
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
	std::cout	<< "\033[1;31m\n\n??????????????????"	<< std::endl
				<< "?OTHER CLAP TESTS?"		<< std::endl
				<< "??????????????????\n\033[32m\n"	<< std::endl;
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
	std::cout	<< "\033[1;31m\n\n??????????????????"	<< std::endl
				<< "?OTHER SCAV TESTS?"		<< std::endl
				<< "??????????????????\n\033[32m\n"	<< std::endl;
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
	test_frag_constructors();
	std::cout	<< "\033[1;31m\n\n??????????????????"	<< std::endl
				<< "?OTHER FRAG TESTS?"		<< std::endl
				<< "??????????????????\n\033[32m\n"	<< std::endl;
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
				<< "\033[37m-=-=-=-=-=-=-=-=-=-"	<< std::endl
				<< "-=TEST  SEPARATOR=-"			<< std::endl
				<< "-=-=-=-=-=-=-=-=-=-"
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
