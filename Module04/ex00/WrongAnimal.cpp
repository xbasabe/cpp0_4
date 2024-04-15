
#include"WrongAnimal.hpp"

//CONSTRUCTORS
WrongAnimal::WrongAnimal(){
std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type){
std::cout << "WrongAnimal " << getType() << " created" << std::endl;
}

WrongAnimal (&WrongAnimal){

}

//OPERATORS OVERLOAD
WrongAnimal::WrongAnimal operator= (&WrongAnimal copy){
	This->_type = copy.getType();
	std::cout << "Wrong Animal assigment operator called" << getType() << " copied" << std::endl;
}

//DESTRUCTOR
virtual WrongAnimal::~WrongAnimal(){
std::cout << "Wrong Animal" << getType() << " destructed" << std::endl;
}

//METHODS
WrongAnimal::makeSound(){
std::cout << "Animal makes pet sounds, like the Beach Boys" << std::endl;
}

std::string WrongAnimal::getType(){
	return this->_type;
}
WrongAnimal::setType(std::string type){
	this->_type = type;
}
