/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:15:18 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/21 15:15:18 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "all.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void); //Default constructor
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        ~FragTrap(void); //Destructor
        void highFiveGuys(void);
};

#endif