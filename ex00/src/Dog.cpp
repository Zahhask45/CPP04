#include "Dog.hpp"


Dog::Dog(): Animal(){
	this->type = "Dog";
	std::cout << _RED << "[Dog constructor]" << _END << std::endl;
}

Dog::~Dog(){
	std::cout << _RED << "[Dog destructor]" << _END << std::endl;
}

Dog::Dog(const Dog &src): Animal(){
	std::cout << _RED << "[Dog copy constructor]" << _END << std::endl;
	*this = src;
}

Dog& Dog::operator=(const Dog &rhs){
	std::cout << _RED << "[Dog operator=]" << _END << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}


void Dog::makeSound() const{
	std::cout << _RED << "[Dog makeSound] Arf Arf" << _END << std::endl;
}

std::string Dog::getType() const{
	return this->type;
}
