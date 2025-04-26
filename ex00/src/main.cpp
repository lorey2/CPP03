/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 01:59:45 by lorey             #+#    #+#             */
/*   Updated: 2025/04/26 22:50:15 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap test("test");
	test.displayInfo();
	test.attack("oui");
	test.takeDamage(3);
	test.displayInfo();
	test.beRepaired(5);
	test.displayInfo();
	
}
