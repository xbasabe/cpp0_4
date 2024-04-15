
#include"Cat.hpp"
#include<iostream>

Cat::makeSound(){
	std::cout << "Cat is making sound, Meoow!" << std::endl;
};

Cat::Cat(): AAnimal::._type("Cat"){
	std::cout << "Cat created by default operator" << std::endl;
}

Cat::Cat(){
	setType("Cat"); // This->_type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(&Cat copy){
	return this = copy;
}

Cat::operator= (&Cat copy){
	this->_type = getType(copy);
	//Animal::operator=(copy);
}
Cat::~Cat(){
	std::cout << "Cat destructed" << std::endl;
}

std::string Cat::std::getType(){
	return this->_type;
}
Cat::setType(std::string type){
	this->_type = type;
}
