
#include"Animal.hpp"

//CONSTRUCTORS
Animal::Animal(){
std::cout << "Animal created" << std::endl;
}

Animal::Animal(std::string type): _type(type){
std::cout << "Animal " << getType() << " created" << std::endl;
}

Animal (Animal){

}

//OPERATORS OVERLOAD
Animal::Animal operator= (&Animal copy){
	This->_type = copy.getType();
	std::cout << "Animal assigment operator called" << getType() << " copied" << std::endl;
}

//DESTRUCTOR
virtual Animal::~Animal(){
std::cout << "Animal" << getType() << " destructed" << std::endl;
}

//METHODS
Animal::makeSound(){
std::cout << "Animal makes pet sounds, like the Beach Boys" << std::endl;
}

std::string Animal::getType(){
	return this->_type;
}
Animal::setType(std::string type){
	this->_type = type;
}
