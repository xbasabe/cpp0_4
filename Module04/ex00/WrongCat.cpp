
#include"WrongCat.hpp"
#include<iostream>

WrongCat::makeSound(){
	std::cout << "WrongCat is making sound, Wrong meow!" << std::endl;
};

WrongCat::WrongCat(): WrongAnimal::._type("Cat"){
	std::cout << "WrongCat created by default operator" << std::endl;
}

WrongCat::WrongCat(){
	setType("WrongCat"); // This->_type = "Cat";
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(&WrongCat copy){
	return this = copy;
}

WrongCat::operator= (&WrongCat copy){
	this->_type = getType(copy);
	//WrongAnimal::operator=(copy);
}
WrongCat::~WrongCat(){
	std::cout << "WrongCat destructed" << std::endl;
}

std::string WrongCat::getType(){
	return this->_type;
}
WrongCat::setType(std::string type){
	this->_type = type;
}
