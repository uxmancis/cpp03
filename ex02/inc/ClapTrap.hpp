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

#include "all.hpp"
#include <string>

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
        ClapTrap(std::string name, int hit_points, int energy_points, int attack_damage);
        ClapTrap(const ClapTrap &copy);
        ~ClapTrap(void); //Destructor
        void attack (const std::string& target);
        void takeDamage (unsigned int amount);
        void beRepaired (unsigned int amount);
        std::string getName(void){ return(_name);}
        int getHitPoints(void){return (_hit_points);};
        void setHitPoints(int new_hit_points){_hit_points = new_hit_points;}
        void increaseHitPoints(unsigned int amount){
            //printf(RED "hellowis, amount = %d, _hit_points = %d\n" RESET_COLOR, amount, _hit_points);
            _hit_points = _hit_points + amount;}
        void decreaseHitPoints(unsigned int amount){_hit_points = _hit_points - amount;}
        int getEnergyPoints(void) {return (_energy_points);};
        void setEnergyPoints(int new_energy_points){_energy_points = new_energy_points;}
        void decreaseEnergyPoints(unsigned int amount){_energy_points = _energy_points - amount;}
        int getAttackDamage(void){return (_attack_damage);}
        void setAttackDamage(int new_attack_damage){_attack_damage = new_attack_damage;}
};

#endif

/* About Inheritance: fundamental concept in OOP
*
*   It allows a new class (subclass) to inherit
*   properties and behaviors from an existing class.
*/