#include "colors.hpp"
#include "Ice.hpp"

Ice::Ice(): AMateria("ice"){
	std::cout << "[Ice constructor]" << std::endl;
}

Ice::~Ice(){
	std::cout << "[Ice destructor]" << std::endl;
}

Ice::Ice(const Ice &src): AMateria("ice"){
	std::cout << "[Ice copy constructor]" << std::endl;
	*this = src;
}

Ice &Ice::operator=(const Ice &rhs){
	std::cout << "[Ice operator=]" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}


AMateria *Ice::clone() const{
	AMateria *NewMateria = new Ice(*this);

	return NewMateria;
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
