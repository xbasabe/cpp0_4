
#include"WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
protected:
	std::string _type;
public:
	WrongCat();
	WrongCat(WrongCat&);
	WrongCat& operator= (WrongCat&);
	~WrongCat();
	void makeSound() const;
	std::string getType() const;
	void setType(std::string);
};
