#include "colors.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (size_t i = 0; i < 4; i++)
		this->slots[i] = NULL;
}

MateriaSource::~MateriaSource(){
	for (size_t i = 0; i < 4; i++){
		if (this->slots[i])
			delete this->slots[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &src){
	*this = src;
}

void MateriaSource::learnMateria(AMateria *m){
	for (size_t i = 0; i < 4; i++)
	{
		if (this->slots[i] == NULL){
			this->slots[i] = m;
			return ;
		}
	}
	std::cout << _RED << "[MateriaSource slots are full]" << _END << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type){
	for ( int i = 0; i < 4; i++ )
        if ( this->slots[i] && this->slots[i]->getType() == type )
            return this->slots[i]->clone();
    return NULL;
}







