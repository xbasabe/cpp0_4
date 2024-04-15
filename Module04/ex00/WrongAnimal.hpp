
#include <iostream>

class WrongAnimal{
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(std::string);
	WrongAnimal (&WrongAnimal);//constructor copia
	WrongAnimal operator= (&WrongAnimal);
	virtual ~WrongAnimal();
	virtual makeSound();
	std::string getType();
	setType(std::string);
};
