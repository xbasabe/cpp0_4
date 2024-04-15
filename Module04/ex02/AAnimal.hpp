
#include <iostream>

class AAnimal{
protected:
	std::string _type;
public:
	AAnimal();
	AAnimal(std::string);
	AAnimal (&AAnimal);//constructor copia
	AAnimal operator= (&AAnimal);
	virtual ~AAnimal();
	virtual makeSound() = 0;
	std::string getType();
	setType(std::string);
};