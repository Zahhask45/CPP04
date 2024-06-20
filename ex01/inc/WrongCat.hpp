#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &);

	WrongCat &operator=(const WrongCat &rhs);

	void makeSound() const;
	std::string getType() const;
};

#endif
