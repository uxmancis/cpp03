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
}

//Constructor with 'name' parameter defined
ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage (0)
{
    std::cout << "ClapTrap " << this->getName() << " was" GREEN " constructed" RESET_COLOR << std::endl;
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
    if (this->_hit_points > 0 && this->_energy_points > 0)
    {
        std::cout << "ClapTrap " << this->getName() << " has" RED " attacked " MAGENTA << target
        << RESET_COLOR ", causing " << this->_attack_damage << " points of damage!" << std::endl;

    }
    else
        std::cout << this->getName() << " cannot attack because it has no hit points or energy points left." << std::endl;
}

void ClapTrap::takeDamage (unsigned int amount)
{
    this->decreaseHitPoints(1);
    if (this->getHitPoints() < 0)
        std::cout << "       > " << this->getName() << " says: Oh no! That hurted " RED "-" << amount << RESET_COLOR ". I have now " AQUAMARINE << this->getHitPoints() << RESET_COLOR << " points" << std::endl; 
    if (this->getHitPoints() == 0)
        std::cout << "Claptrap " << this->getName() << " is out of hit points."  << std::endl;
    
}

void ClapTrap::beRepaired (unsigned int amount)
{
    if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
    {
        this->decreaseHitPoints(amount);
        this->decreaseEnergyPoints(1);
        std::cout << "ClapTrap " << this->getName() << " repairs itself, recovering " << amount << "hit points!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->getName() << " cannot repair itself, no hit points or energy points left," << std::endl;
    // std::cout << "ClapTrap " << this->getName() << " has spent " RED "-1" RESET_COLOR " point to be repaired. " << std::endl;
    (void)amount;
}
