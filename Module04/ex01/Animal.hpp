
#include <iostream>

class Animal{
protected:
	std::string _type;
public:
	Animal();
	Animal(std::string);
	Animal (Animal);//constructor copia
	Animal operator= (&Animal);
	virtual ~Animal();
	virtual makeSound();
	std::string getType();
	setType(std::string);
};