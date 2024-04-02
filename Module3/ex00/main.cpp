/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:13:27 by xbasabe-          #+#    #+#             */
/*   Updated: 2024/04/02 17:14:02 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(){
    ClapTrap a("Clapo");
    ClapTrap b("Trapo");
    std::cout << "Clapo upgraded to 10 damage points" << std::endl;
    a.setDamage(a.getDamage() + 10);
    a.attack("Trapo");
    b.takeDamage(a.getDamage());
    b.beRepaired(5);
    a.attack("Trapo");
    b.takeDamage(a.getDamage());
    a.attack("Trapo");
    b.takeDamage(a.getDamage());
    a.attack("Trapo");
    b.takeDamage(a.getDamage());
    b.beRepaired(5);
    return(0);
}