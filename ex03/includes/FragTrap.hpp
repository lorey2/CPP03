/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:53:56 by lorey             #+#    #+#             */
/*   Updated: 2025/04/30 22:45:34 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		virtual ~FragTrap();
		FragTrap(const FragTrap &frag_trap);
		FragTrap& operator=(const FragTrap &frag_trap);
		void	attack(const std::string &target);
		void	highFivesGuys(void);
};
#endif
