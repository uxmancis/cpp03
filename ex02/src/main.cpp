/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:18:36 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/20 19:20:50 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/all.hpp"

int main(void)
{
    /* ******************** Storytelling ********************** */
    std::cout << "Once upon a time, 2 twin robots were constructed in the same factory..." << std::endl;
    std::cout << "They were named " AQUAMARINE << "Nerewis" << RESET_COLOR " and " MAGENTA << "Maitetxu" << RESET_COLOR "." << std::endl;
    std::cout << "\n";
    ClapTrap first("Nerewis");
    ScavTrap second("Maitetxu");
    FragTrap third ("Uxuwis");

    
    std::cout << AQUAMARINE << first.getName() << RESET_COLOR " and " MAGENTA << second.getName() << RESET_COLOR " enjoyed watching sunrises together while having a cup of hot chocolate for robots and lived a happy life (❀ˆᴗˆ)(•́ᴗ•̀✿) " << std::endl;
    std::cout << "..." << std::endl;
    std::cout << "..." << std::endl;
    std::cout << "..." << std::endl;
    std::cout << "That was until..." << std::endl;
    std::cout << "There was only one last cup of hot chocolate for robots left in the world! ☕☕ (•᷄- •᷅ ;)" << std::endl;

    first.attack("random robot 1");
    first.attack("random robot 2");
    first.attack("random robot 3");
    first.attack("random robot 4");
    
    std::cout << first.getName() << " wanted to destroy anyone who could have the last cup of hot chocolate. However, she was not strong enough to cause damage" << std::endl;
    std::cout << third.getName() << " said: Hey girls, there is no need...";
    third.highFiveGuys();
    std::cout << "\n\n********************************************** " AQUAMARINE "THE END " RESET_COLOR "************************************************" << std::endl;
    std::cout << "*********** Scroll up to read the great story of Uxuwis, the hero robot of hot chocolate lovers *******" << std::endl;
    std::cout << "*******************************************************************************************************" << std::endl;
    return (0);
}