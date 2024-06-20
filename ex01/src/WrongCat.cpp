#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(){
	std::cout << _BLUE << "[WrongCat constructor]" << _END << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat(){
	std::cout << _BLUE << "[WrongCat destructor]" << _END << std::endl;
}

WrongCat::WrongCat(const WrongCat &src): WrongAnimal(){
	std::cout << _BLUE << "[WrongCat copy constructor]" << _END << std::endl;
	*this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs){
	std::cout << _BLUE << "[WrongCat operator=]" << _END << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << _BLUE << "[WrongCat makeSound] Glub Glub" << _END << std::endl;
}

std::string WrongCat::getType() const{
	return this->type;
}
