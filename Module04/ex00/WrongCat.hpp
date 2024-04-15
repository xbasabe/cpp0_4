
#include"WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
protected:
	std::string _type;
public:
	WrongCat();
	WrongCat(&WrongCat);
	WrongCat operator= (&WrongCat);
	~WrongCat();
	makeSound();
	std::string getType();
	setType(std::string);
};
