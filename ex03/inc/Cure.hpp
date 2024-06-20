#ifndef CURE_HPP
#define CURE_HPP

#include "colors.hpp"
#include "AMateria.hpp"

class Cure: public AMateria{
public:
	Cure();
	~Cure();
	Cure(const Cure &);

	Cure &operator=(const Cure &rhs);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
