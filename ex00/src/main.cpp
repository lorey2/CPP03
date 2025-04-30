/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 01:59:45 by lorey             #+#    #+#             */
/*   Updated: 2025/04/30 23:33:08 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


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

int	main(void)
{
	test_clap_constructors();
	ClapTrap test("test");
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
