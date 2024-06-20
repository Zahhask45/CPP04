#ifndef ICE_HPP
#define ICE_HPP

#include "colors.hpp"
#include "AMateria.hpp"

class Ice: public AMateria{
public:
	Ice();
	~Ice();
	Ice(const Ice &);

	Ice &operator=(const Ice &rhs);


	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

protected:
	std::string type; // type will be "ice" not anything else
};

#endif
