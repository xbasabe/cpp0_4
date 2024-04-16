
#include"WrongCat.hpp"
#include<iostream>

void WrongCat::makeSound() const{
	std::cout << "WrongCat is making sound, Wrong meow!" << std::endl;
};

WrongCat::WrongCat(): WrongAnimal("wrongCat"){
	std::cout << "WrongCat created by default operator" << std::endl;
}

WrongCat::WrongCat(WrongCat& copy){
	*this = copy;
}

WrongCat& WrongCat::operator= (WrongCat& copy){
	this->_type = copy.getType();
	//WrongAnimal::operator=(copy);
	return *this;
}
WrongCat::~WrongCat(){
	std::cout << "WrongCat destructed" << std::endl;
}

std::string WrongCat::getType() const{
	return this->_type;
}
void WrongCat::setType(std::string type){
	this->_type = type;
}
