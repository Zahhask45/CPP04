#include "colors.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"


int main(){

	ICharacter *prot = new Character("Hero");
	ICharacter *saint = new Character("Saint");
	ICharacter *vill = new Character("Villain");

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());	

	AMateria *spells_prot;
	AMateria *spells_prot2;
	AMateria *spells_prot3;
	AMateria *spells_prot4;
	AMateria *spells_prot5;
	AMateria *spells_saint;
	spells_prot = src->createMateria("ice");
	spells_prot2 = src->createMateria("ice");
	spells_prot3 = src->createMateria("ice");
	spells_prot4 = src->createMateria("ice");
	spells_prot5 = src->createMateria("ice");
	spells_saint = src->createMateria("cure");
	
	prot->equip(spells_prot);
	prot->equip(spells_prot2);
	prot->equip(spells_prot3);
	prot->equip(spells_prot4);
	prot->equip(spells_prot5);
	saint->equip(spells_saint);

	prot->use(0, *vill);
	saint->use(0, *prot);

	delete spells_prot5;
	delete vill;
	delete prot;
	delete saint;
	delete src;


	return 0;
}


/* int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	
	return 0;
} */
