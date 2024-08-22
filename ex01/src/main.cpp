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
    std::cout << "..." << std::endl;
    std::cout << "..." << std::endl;
    std::cout << "..." << std::endl;
    std::cout << "However, " << second.getName() << " thought " << first.getName() << "'s idea of attacking other robots was a great idea to keep the last cup of hot chocolate for robots in the world" << std::endl;
    second.attack("random robot 1");
    second.attack("random robot 2");
    second.attack("random robot 3");
    second.attack("random robot 4");
    std::cout << second.getName() << " noticed that the one robot she had to get rid of was " << first.getName() << ", the greatest hot chocolate for robots' lover." << std::endl;
    std::cout << second.getName() << ", who was stronger than " << first.getName() << ", attacked her." << std::endl;
    second.guardGate();

    std::cout << first.getName() << " prepared herself for the attack" << std::endl;
    first.beRepaired(5);
    first.beRepaired(5);
    first.beRepaired(5);
    first.beRepaired(5);
    first.beRepaired(5);
    second.attack(first.getName());
    first.takeDamage(second.getAttackDamage());
    std::cout << "In the first attack it worked! " << first.getName() << " had saved herself from her strong and evil twin-robot sister " << second.getName() << std::endl;
    std::cout << "However, strong robot " << second.getName() << " attacked " << first.getName() << " again, and this time, it was already too late..." << std::endl;
    second.attack(first.getName());
    first.takeDamage(second.getAttackDamage());
    second.attack(first.getName());
    first.takeDamage(second.getAttackDamage());
    second.attack(first.getName());
    first.takeDamage(second.getAttackDamage());
    first.beRepaired(5);
    first.beRepaired(5);
    first.beRepaired(5);
    first.beRepaired(5);
    std::cout << "\n";
    std::cout << second.getName() << " got happy at first, as she had saved the last cup of hot chocolate for robots in the world for herself." << std::endl;
    std::cout << "However, it took her no long time to realise that her real passion was to share the hot chocolate moment with the one twin-robot she had just destroyed." << std::endl;
    std::cout << second.getName() << " was this sad, she turned herself OFF" << std::endl;
    std::cout << "..." << std::endl;
    std::cout << "..." << std::endl;
    std::cout << "''In the end, we discovered that the true treasure in life lies not in the things we accumulate but in the love and care we give to those who matter most.''" << std::endl;
    std::cout << "Take care of your loved ones." << std::endl;
    std::cout << "..." << std::endl;
    std::cout << "..." << std::endl;
    std::cout << "\n\n********************************************** " AQUAMARINE "THE END " RESET_COLOR "**********************************************" << std::endl;
    std::cout << "*********** Scroll up to read the great betrayal story of two hot chocolate lover twin-robots *******" << std::endl;
    std::cout << "*****************************************************************************************************" << std::endl;
    return (0);
}