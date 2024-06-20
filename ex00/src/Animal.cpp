#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << _YELLOW << "[Animal constructor]" << _END << std::endl;
}

Animal::~Animal(){
	std::cout << _YELLOW << "[Animal destructor]" << _END << std::endl;
}

Animal::Animal(const Animal &src){
	std::cout << _YELLOW << "[Animal copy constructor]" << _END << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &rhs){
	std::cout << _YELLOW << "[Animal operator=]" << _END << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}


void Animal::makeSound() const{
	std::cout << _YELLOW << "[Animal makeSound] Hello everybody my name is Markiplier" << _END << std::endl;
}

std::string Animal::getType() const{
	return this->type;
}
