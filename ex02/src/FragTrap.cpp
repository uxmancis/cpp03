/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:21:36 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/21 15:21:36 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/all.hpp"

//Default Constructor
FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "FragTrap initialization..." << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap " << this->getName() << " has been" GREEN " created" RESET_COLOR << std::endl;
    std::cout << "> " << this->getName() << " FragTrap " AQUAMARINE "energy points"  RESET_COLOR " left : " AQUAMARINE << this->getEnergyPoints() << RESET_COLOR << std::endl;
    std::cout << "> " << this->getName() << " FragTrap " YELLOW "hit points"  RESET_COLOR " left : " YELLOW << this->getEnergyPoints() << RESET_COLOR << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
}

//Constructor with 'name' parameter defined
FragTrap::FragTrap(std::string name) : ClapTrap (name)
{
    std::cout << "FragTrap initialization..." << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "FragTrap " << this->getName() << " was" GREEN " constructed" RESET_COLOR << std::endl;
    std::cout << "> " << this->getName() << " FragTrap " AQUAMARINE "energy points"  RESET_COLOR " left : " AQUAMARINE << this->getEnergyPoints() << RESET_COLOR << std::endl;
    std::cout << "> " << this->getName() << " FragTrap " YELLOW "hit points"  RESET_COLOR " left : " YELLOW << this->getEnergyPoints() << RESET_COLOR << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
}

//Copy constructor
FragTrap::FragTrap (const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = copy;
}

//Destructor
FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->getName() << " has been" RED " destroyed" RESET_COLOR << std::endl;
}

void FragTrap::highFiveGuys(void)
{
    std::cout << " I just got more cups of hot chocolate for robots for everyone! High five!" << std::endl;
}