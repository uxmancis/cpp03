/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:18:32 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/20 20:01:51 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/all.hpp"

/*----------------------------------------------- Constructors -----------------------------------------------*/
//Default Constructor
ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "ScavTrap initialization..." << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap " << this->getName() << " has been" GREEN " created" RESET_COLOR << std::endl;
    std::cout << "> " << this->getName() << " ScavTrap " AQUAMARINE "energy points"  RESET_COLOR " left : " AQUAMARINE << this->getEnergyPoints() << RESET_COLOR << std::endl;
    std::cout << "> " << this->getName() << " ScavTrap " YELLOW "hit points"  RESET_COLOR " left : " YELLOW << this->getEnergyPoints() << RESET_COLOR << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
}

//Constructor with 'name' parameter defined
ScavTrap::ScavTrap(std::string name) : ClapTrap (name)
{
    std::cout << "ScavTrap initialization..." << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap " << this->getName() << " was" GREEN " constructed" RESET_COLOR << std::endl;
    std::cout << "> " << this->getName() << " ScavTrap " AQUAMARINE "energy points"  RESET_COLOR " left : " AQUAMARINE << this->getEnergyPoints() << RESET_COLOR << std::endl;
    std::cout << "> " << this->getName() << " ScavTrap " YELLOW "hit points"  RESET_COLOR " left : " YELLOW << this->getEnergyPoints() << RESET_COLOR << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
}

//Copy constructor
ScavTrap::ScavTrap (const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = copy;
}

//Destructor
ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << this->getName() << " has been" RED " destroyed" RESET_COLOR << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << this->getName() << " ScavTrap is in gate keeper mode" << std::endl;
}
