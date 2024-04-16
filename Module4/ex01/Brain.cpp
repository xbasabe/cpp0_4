/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:47:16 by xbasabe-          #+#    #+#             */
/*   Updated: 2024/04/16 18:53:59 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"
#include<iostream>

Brain::Brain(){
    std::cout << "new brain class created" << std::endl;
}

Brain::~Brain(){
    std::cout << "brain destructed" << std::endl;
}
Brain::Brain(Brain& copy){
    *this = copy;
}

Brain& Brain::operator= (Brain& copy){
    this->setIdeas(copy.getIdeas());
    return *this;
}

void Brain::setIdeas(std::string* ideas){ 
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = ideas[i];
}

std::string* Brain::getIdeas(){
    //for(int i = 0; i < 100; i++)
        return this->_ideas;
}
