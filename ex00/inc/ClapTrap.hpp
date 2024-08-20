/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:59:57 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/19 15:59:57 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string> //std::string
#include <iostream> //std::cout, std::endl

#define GREEN "\033[0;92m"
#define RED "\033[0;31m"
#define AQUAMARINE "\033[0;96m"
#define MAGENTA "\033[0;95m"
#define YELLOW "\033[0;93m"
#define RESET_COLOR "\033[0m"

class ClapTrap
{
    private:
        std::string     _name;
        int    _hit_points; //Health of ClapTrap
        int    _energy_points;
        int    _attack_damage;


    public:
        ClapTrap(void); //Default constructor
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &copy);
        ~ClapTrap(void); //Destructor
        void attack (const std::string& target);
        void takeDamage (unsigned int amount);
        void beRepaired (unsigned int amount);
        std::string getName(void){ return(_name);}
        int getHitPoints(void){return (_hit_points);};
        void decreaseHitPoints(unsigned int amount){_hit_points = _hit_points - amount;}
        int getEnergyPoints(void) {return (_energy_points);};
        void decreaseEnergyPoints(unsigned int amount){_energy_points = _energy_points - amount;}
};

#endif

/* About Inheritance: fundamental concept in OOP
*
*   It allows a new class (subclass) to inherit
*   properties and behaviors from an existing class.
*/