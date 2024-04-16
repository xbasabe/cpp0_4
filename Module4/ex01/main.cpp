/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:56:45 by xbasabe-          #+#    #+#             */
/*   Updated: 2024/04/16 18:18:25 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {
const Animal* animals[10];
for(int i = 0; i < 5; i++)
    animals[i] = new Dog();
for(int i = 5; i < 10; i++)
    animals[i] = new Cat();


for(int i = 0; i < 10; i++)
    delete animals[i];
}