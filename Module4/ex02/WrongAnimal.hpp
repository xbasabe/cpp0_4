
#include <iostream>

class WrongAnimal{
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(std::string);
	WrongAnimal (WrongAnimal&);//constructor copia
	WrongAnimal& operator= (WrongAnimal&);
	virtual ~WrongAnimal();
	virtual void makeSound() const;
	std::string getType() const;
	void setType(std::string);
};
