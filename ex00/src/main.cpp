/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:13:18 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/19 16:13:18 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
    ClapTrap first("Uxue");
    ClapTrap second("Nerewis");

    //first.attack(second.getName());
    first.attack("some other random robot");
    first.beRepaired(5);
    first.attack("some other random robot");
    first.attack("some other random robot");
    second.attack(first.getName());
    first.takeDamage(second.getAttackDamage());
    first.takeDamage(10);
    first.beRepaired(3);
    for (int i = 0; i < 12 ; i++)
        first.attack("random last robot");
    first.beRepaired(3);
}