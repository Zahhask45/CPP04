CPP/CPP04/ex01/src/Dog.cpp#include "Dog.hpp"


Dog::Dog(){
	this->type = "Dog";
	this->brain = new Brain("Dog");
	std::cout << _RED << "[Dog constructor]" << _END << std::endl;
}

Dog::~Dog(){
	delete this->brain;
	std::cout << _RED << "[Dog destructor]" << _END << std::endl;
}

Dog::Dog(const Dog &src){
	std::cout << _RED << "[Dog copy constructor]" << _END << std::endl;
	this->brain = new Brain(*(src.getBrain()));
	this->type = src.getType();
}

Dog& Dog::operator=(const Dog &rhs){
	std::cout << _RED << "[Dog operator=]" << _END << std::endl;
	if (this->brain)
		delete (this->brain);
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->brain = new Brain(*(rhs.brain));
	}
	return *this;
}


void Dog::makeSound() const{
	std::cout << _RED << "[Dog makeSound] Arf Arf" << _END << std::endl;
}

std::string Dog::getType() const{
	return this->type;

}
Brain *Dog::getBrain()const{
	return this->brain;	
}
