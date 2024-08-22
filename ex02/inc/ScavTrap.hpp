/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:21:23 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/20 19:59:55 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.hpp"
#include <string>

/*ScavTrap is a subclass (derived class) from ClapTrap superclass
*   That's called Inheritance.
*
*   Anything that is not private in ClapTrap class
*   is accessible from ScavTrap class.
*/
class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void); //Default constructor
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &copy);
        ~ScavTrap(void); //Destructor
        void guardGate(void);
};