
#include"Animal.hpp"

class Cat : public Animal{
protected:
	std::string _type;
public:
	Cat();
	Cat(&Cat);
	Cat operator= (&Cat);
	~Cat();
	makeSound();
	std::string getType();
	setType(std::string);
};

