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

#include"AAnimal.hpp"

//CONSTRUCTORS
AAnimal::AAnimal(){
std::cout << "Abstract Animal created" << std::endl;
}

AAnimal::AAnimal(std::string type): _type(type){
//std::cout << "Animal " << getType() << " created" << std::endl;
std::cout << "Abstract Animal created" << std::endl;
}

AAnimal::AAnimal (AAnimal& copy){
	*this = copy;
}

//OPERATORS OVERLOAD
AAnimal& AAnimal::operator= (AAnimal& copy){
	//This->_type = copy.getType();
	setType(copy.getType());
	return *this;
	std::cout << "Abstract Animal assigment operator called" << copy.getType() << " copied" << std::endl;
}

//DESTRUCTOR
AAnimal::~AAnimal(){
std::cout << "Abstract Animal destructed" << std::endl;
}

//METHODS

void AAnimal::makeSound() const{
std::cout << "Abstract Animal, no sound" << std::endl;
}

std::string AAnimal::getType() const{
	return this->_type;
}
void AAnimal::setType(std::string type){
	this->_type = type;
}
