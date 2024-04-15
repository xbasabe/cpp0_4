
#include"AAnimal.hpp"

//CONSTRUCTORS
AAnimal::AAnimal(){
std::cout << "Abstract Animal created" << std::endl;
}

AAnimal::AAnimal(std::string type): _type(type){
std::cout << "Abstract Animal " << getType() << " created" << std::endl;
}


//OPERATORS OVERLOAD
AAnimal::AAnimal operator= (&AAnimal copy){
	This->_type = copy.getType();
	std::cout << "Abstract Animal assigment operator called" << getType() << " copied" << std::endl;
}

//DESTRUCTOR
virtual AAnimal::~AAnimal(){
std::cout << "Abstract Animal" << getType() << " destructed" << std::endl;
}

//METHODS
AAnimal::makeSound(){
std::cout << "Abstract Animal makes no sounds" << std::endl;
}

std::string AAnimal::getType(){
	return this->_type;
}
AAnimal::setType(std::string type){
	this->_type = type;
}
