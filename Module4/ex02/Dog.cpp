/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:28:15 by xbasabe-          #+#    #+#             */
/*   Updated: 2024/04/16 18:28:15 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

void Dog::makeSound() {
	std::cout << "Dog barks, Woof!" << std::endl;
};

Dog::Dog(): AAnimal("Dog"){
	std::cout << "Dog created by default constructor" << std::endl;
	this->dogbrain = new Brain();
}

Dog::Dog(Dog& copy) : AAnimal() {
	*this = copy;
}
Dog& Dog::operator= (Dog& copy){
	AAnimal::operator=(copy);
	return (*this);
}
Dog::~Dog(){
	std::cout << "Dog destructed" << std::endl;
}

std::string Dog::getType() const{
	return this->_type;
}
void Dog::setType(std::string type){
	this->_type = type;
}
