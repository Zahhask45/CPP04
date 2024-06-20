#include "colors.hpp"
#include "Cure.hpp"

Cure::Cure(): AMateria("cure"){
	std::cout << "[Cure Constructor]" << std::endl;
}

Cure::~Cure(){
	std::cout << "[Cure Destructor]" << std::endl;
}

Cure::Cure(const Cure &src): AMateria("cure"){
	std::cout << "[Cure Copy constructor]" << std::endl;
	*this = src;
}

Cure &Cure::operator=(const Cure &rhs){
	std::cout << "[Cure operator=]" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

AMateria* Cure::clone() const{
	AMateria* NewClone = new Cure(*this);
	return NewClone;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName()<< "\'s wounds *" << std::endl;
}
