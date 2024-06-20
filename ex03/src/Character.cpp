#include "colors.hpp"
#include "Character.hpp"


Character::Character(): Name("Robert Moreno"){
	std::cout << "[Character Constructor]" << std::endl;
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::~Character(){
	std::cout << "[Character Destructor]" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}
Character::Character(const Character &src){
	std::cout << "[Character Copy Constructor]" << std::endl;
	*this = src;
}

Character::Character(std::string name): Name(name){
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "[Character Name Constructor]" << std::endl;

}

Character &Character::operator=(const Character &rhs){
	std::cout << "[Character operator=]" << std::endl;
	if (this != &rhs){
		this->Name = rhs.Name;
		for (size_t i = 0; i < 4; i++)
			this->inventory[i] = NULL;
	}
	return *this;
}

void Character::equip(AMateria* m){
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
	std::cout << _RED << "Inventory is full" << _END << std::endl;
}

void Character::unequip(int idx){
	if (idx < 0 || idx > 3)
		return ;
	if (this->inventory[idx]){
		this->inventory[idx] = NULL; //* Memory needs to be removed from main
	}
	std::cout << _GREEN << this->Name << " removed " << this->inventory[idx]->getType()
		<< " Materia from the inventory slot n" << idx << _END << std::endl;
}

void Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx > 3)
		return ;
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}

std::string const &Character::getName() const{
	return this->Name;
}



