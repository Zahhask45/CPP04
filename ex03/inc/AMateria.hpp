#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "colors.hpp"
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(const AMateria &);
	virtual ~AMateria();


	AMateria(std::string const & type);
	AMateria &operator=(const AMateria &rhs);

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
