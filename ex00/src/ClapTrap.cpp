/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:05:20 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/19 16:05:20 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

/*----------------------------------------------- Constructors -----------------------------------------------*/
//Default Constructor
ClapTrap::ClapTrap(void) : _name("no-name object"), _hit_points(10), _energy_points(10), _attack_damage (0)
{
    std::cout << "ClapTrap " << this->getName() << " has been" GREEN " created" RESET_COLOR << std::endl;
    std::cout << "> " << this->getName() << " ClapTrap " AQUAMARINE "energy points"  RESET_COLOR " left : " AQUAMARINE << this->getEnergyPoints() << RESET_COLOR << std::endl;
    std::cout << "> " << this->getName() << " ClapTrap " YELLOW "hit points"  RESET_COLOR " left : " YELLOW << this->getEnergyPoints() << RESET_COLOR << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
}

//Constructor with 'name' parameter defined
ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage (0)
{
    std::cout << "ClapTrap " << this->getName() << " was" GREEN " constructed" RESET_COLOR << std::endl;
    std::cout << "> " << this->getName() << " ClapTrap " AQUAMARINE "energy points"  RESET_COLOR " left : " AQUAMARINE << this->getEnergyPoints() << RESET_COLOR << std::endl;
    std::cout << "> " << this->getName() << " ClapTrap " YELLOW "hit points"  RESET_COLOR " left : " YELLOW << this->getEnergyPoints() << RESET_COLOR << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
}

//Copy constructor
ClapTrap::ClapTrap (const ClapTrap &copy)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

//Destructor
ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->getName() << " has been" RED " destroyed" RESET_COLOR << std::endl;
}

void ClapTrap::attack (const std::string& target)
{
    this->decreaseEnergyPoints(1);
    if (this->_hit_points > 0 && this->_energy_points > 0)
    {
        std::cout << "ClapTrap " MAGENTA << this->getName() << RESET_COLOR " has" RED " attacked " RESET_COLOR << target
        << ", causing " RED << this->_attack_damage << RESET_COLOR " points of damage!" << std::endl;
        std::cout << "> " MAGENTA << this->getName() << RESET_COLOR " ClapTrap " AQUAMARINE "energy points"  RESET_COLOR " left : " AQUAMARINE << this->getEnergyPoints() << RESET_COLOR << std::endl;
        std::cout << "> " MAGENTA << this->getName() << RESET_COLOR " ClapTrap " YELLOW "hit points"  RESET_COLOR " left : " YELLOW << this->getHitPoints() << RESET_COLOR << std::endl;
        std::cout << "\n";
    }
    else
        std::cout << this->getName() << " cannot attack because it has no hit points or energy points left." << std::endl;
}

//Pdte.
void ClapTrap::takeDamage (unsigned int amount)
{
    this->decreaseHitPoints(amount);
    if (this->getHitPoints() < 0)
        std::cout << "       > " << this->getName() << " says: Oh no! That hurted " RED "-" << amount << RESET_COLOR ". I have now " AQUAMARINE << this->getHitPoints() << RESET_COLOR << " points" << std::endl; 
    if (this->getHitPoints() == 0)
        std::cout << "Claptrap " MAGENTA << this->getName() << RESET_COLOR " is out of hit points."  << std::endl;
    
}

void ClapTrap::beRepaired (unsigned int amount)
{
    if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
    {
        this->increaseHitPoints(amount);
        this->decreaseEnergyPoints(1);
        std::cout << "ClapTrap " << this->getName() << GREEN " repairs" RESET_COLOR " itself, recovering " GREEN << amount << RESET_COLOR " hit points!" << std::endl;
        std::cout << "> " MAGENTA << this->getName() << RESET_COLOR " ClapTrap " AQUAMARINE "energy points"  RESET_COLOR " left : " AQUAMARINE << this->getEnergyPoints() << RESET_COLOR << std::endl;
        std::cout << "> " MAGENTA << this->getName() << RESET_COLOR " ClapTrap " YELLOW "hit points"  RESET_COLOR " left : " YELLOW << this->getHitPoints() << RESET_COLOR << std::endl;
        std::cout << "\n";
    }
    else
        std::cout << "ClapTrap " << this->getName() << " cannot repair itself, no hit points or energy points left," << std::endl;
    // std::cout << "ClapTrap " << this->getName() << " has spent " RED "-1" RESET_COLOR " point to be repaired. " << std::endl;
    (void)amount;
}
