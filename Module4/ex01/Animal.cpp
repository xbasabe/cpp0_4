/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:56:57 by xbasabe-          #+#    #+#             */
/*   Updated: 2024/04/16 13:56:57 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

//CONSTRUCTORS
Animal::Animal(){
std::cout << "Animal created" << std::endl;
}

Animal::Animal(std::string type): _type(type){
//std::cout << "Animal " << getType() << " created" << std::endl;
std::cout << "Animal created" << std::endl;
}

Animal::Animal (Animal& copy){
	*this = copy;
}

//OPERATORS OVERLOAD
Animal& Animal::operator= (Animal& copy){
	//This->_type = copy.getType();
	setType(copy.getType());
	return *this;
	std::cout << "Animal assigment operator called" << copy.getType() << " copied" << std::endl;
}

//DESTRUCTOR
Animal::~Animal(){
std::cout << "Animal" << getType() << " destructed" << std::endl;
}

//METHODS
void Animal::makeSound() const{
std::cout << "Animal makes pet sounds, like the Beach Boys" << std::endl;
}

std::string Animal::getType() const{
	return this->_type;
}
void Animal::setType(std::string type){
	this->_type = type;
}
