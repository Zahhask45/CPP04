#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal"){
	std::cout << _PURPLE << "[WrongAnimal constructor]" << _END << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << _PURPLE << "[WrongAnimal destructor]" << _END << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src){
	std::cout << _PURPLE << "[WrongAnimal copy constructor]" << _END << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs){
	std::cout << _PURPLE << "[WrongAnimal operator=]" << _END << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}


void WrongAnimal::makeSound() const{
	std::cout << _PURPLE << "[WrongAnimal makeSound] Cling Clang" << _END << std::endl;
}

std::string WrongAnimal::getType() const{
	return this->type;
}

