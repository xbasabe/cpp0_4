
#include"Dog.hpp"

Dog::makeSound(){
	std::cout << "Dog barks, Woof!" << std::endl;
};

Dog::Dog(): Animal::._type("Dog"){
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(){
	std::cout << "Dog created by default operator" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(&Dog copy){
	*this = copy;
}
Dog &Dog::operator= (&Dog copy){
	Animal::operator=(copy);
	return (*this);
}
Dog::~Dog(){
	std::cout << "Dog destructed" << std::endl;
}

std::strin Dog::getType(){
	retutn this->_type;
}
Dog::setType(std::string type){
	this->_type = type;
}
