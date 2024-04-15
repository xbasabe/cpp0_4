
#include"Dog.hpp"
#include "Brain.hpp"

Dog::makeSound(){
	std::cout << "Dog barks, Woof!" << std::endl;
};

Dog::Dog(): Animal::._type("Dog"){
	std::cout << "Dog created" << std::endl;
	this->_Brain = new Brain();
}

Dog::Dog(){
	std::cout << "Dog created by default operator" << std::endl;
	this->_type = "Dog";
	this->_Brain = new Brain();
}

Dog::Dog(&Dog copy){
	*this = copy;
}
Dog &Dog::operator= (&Dog copy){
	Animal::operator=(copy);
	this->_Brain = new Brain();
	return (*this);
}
Dog::~Dog(){
	std::cout << "Dog destructed" << std::endl;
	delete this->_Brain;
}

std::strin Dog::getType(){
	return this->_type;
}
Dog::setType(std::string type){
	this->_type = type;
}
