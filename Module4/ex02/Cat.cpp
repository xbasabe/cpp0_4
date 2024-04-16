/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:09:55 by xbasabe-          #+#    #+#             */
/*   Updated: 2024/04/16 16:09:55 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include<iostream>

void Cat::makeSound(){
	std::cout << "Cat is making sound, Meoow!" << std::endl;
};

Cat::Cat() : AAnimal("Cat"){
	std::cout << "Cat created by default constructor" << std::endl;
	this->catbrain = new Brain();
}

Cat::Cat(Cat& copy) : AAnimal(){
	*this = copy;
}

Cat& Cat::operator= (Cat& copy){
	this->_type = copy.getType();
	return *this;
}
Cat::~Cat(){
	std::cout << "Cat destructed" << std::endl;
	delete catbrain;
}

std::string Cat::getType(){
	return this->_type;
}
void Cat::setType(std::string type){
	this->_type = type;
}
