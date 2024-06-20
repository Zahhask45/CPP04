#include "AAnimal.hpp"

AAnimal::AAnimal(): type("AAnimal")
{
	std::cout << _YELLOW << "[AAnimal constructor]" << _END << std::endl;
}

AAnimal::~AAnimal(){
	std::cout << _YELLOW << "[AAnimal destructor]" << _END << std::endl;
}

AAnimal::AAnimal(const AAnimal &src){
	std::cout << _YELLOW << "[AAnimal copy constructor]" << _END << std::endl;
	*this = src;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs){
	std::cout << _YELLOW << "[AAnimal operator=]" << _END << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}


void AAnimal::makeSound() const{
	std::cout << _YELLOW << "[AAnimal makeSound] Hello everybody my name is Markiplier" << _END << std::endl;
}

std::string AAnimal::getType() const{
	return this->type;
}
