
#include"Animal.hpp"

class Dog : public Animal{
protected:
	std::string _type;
public:
	Dog();
	Dog &Dog(&Dog);
	Dog operator= (&Dog);
	~Dog();
	makeSound();
	std::string getType();
	setType(std::string);
};
