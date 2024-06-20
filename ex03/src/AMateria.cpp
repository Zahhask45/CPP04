#include "colors.hpp"
#include "AMateria.hpp"


AMateria::AMateria(): type("AMateria"){
	std::cout << "[AMateria contructor called]" << std::endl;
}

AMateria::~AMateria(){
	std::cout << "[AMateria destructor called]" << std::endl;
}

AMateria::AMateria(const AMateria &src){
	std::cout << "[AMateria copy constructor called]" << std::endl;
	*this = src;
}

AMateria::AMateria(std::string const & type): type(type){
	std::cout << "[AMateria type constructor called]" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &rhs){
	std::cout << "[AMateria operator=]" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

std::string const &AMateria::getType() const{
	return this->type;
}

void    AMateria::use( ICharacter& target )
{
    std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}

