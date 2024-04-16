
#include"WrongAnimal.hpp"

//CONSTRUCTORS
WrongAnimal::WrongAnimal(){
std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type){
std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal (WrongAnimal& copy){
	*this = copy;
}

//OPERATORS OVERLOAD
WrongAnimal& WrongAnimal::operator= (WrongAnimal& copy){
	_type = copy.getType();
	std::cout << "Wrong Animal assigment operator called" << getType() << " copied" << std::endl;
	return *this;
}

//DESTRUCTOR
WrongAnimal::~WrongAnimal(){
std::cout << "Wrong Animal" << getType() << " destructed" << std::endl;
}

//METHODS
void WrongAnimal::makeSound() const{
std::cout << "Animal makes pet sounds, like the Beach Boys" << std::endl;
}

std::string WrongAnimal::getType() const{
	return this->_type;
}
void WrongAnimal::setType(std::string type){
	this->_type = type;
}
