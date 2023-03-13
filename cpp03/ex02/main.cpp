/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yogun <yogun@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:34:11 by yogun             #+#    #+#             */
/*   Updated: 2023/03/13 15:35:30 by yogun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	FragTrap fragtrap("miniFT");
	FragTrap fragtrap2("bigFT");

	fragtrap.highFivesGuys();
	fragtrap2.highFivesGuys();
	
	std::cout << "High fives are over." << std::endl;
	
    return 0;
}
