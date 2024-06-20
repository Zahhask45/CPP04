#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "colors.hpp"
#include "IMateriaSource.hpp"


class MateriaSource: public IMateriaSource{
private:
	AMateria *slots[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const &type);
};


#endif
