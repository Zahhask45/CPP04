#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
public:
	Cat();
	~Cat();
	Cat(const Cat &);

	Cat& operator=(const Cat &rhs);


	void makeSound() const;
	std::string getType() const;
	Brain *getBrain() const;


private:
	Brain* brain; //falta dar start a isto
};



#endif
