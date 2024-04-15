
#include"AAnimal.hpp"

class Dog : public AAnimal{
private:
	Brain *_Brain;
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
