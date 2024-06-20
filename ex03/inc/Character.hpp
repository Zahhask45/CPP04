#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "colors.hpp"
#include "AMateria.hpp"

class Character: public ICharacter{
private:
	AMateria *inventory[4];
	std::string Name;
public:
	Character();
	~Character();
	Character(const Character &);
	Character(std::string);

	Character &operator=(const Character &rhs);


	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif
