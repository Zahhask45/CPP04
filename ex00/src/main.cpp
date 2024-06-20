#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {

    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    std::cout << "----------------------------------------------" << std::endl;

    const WrongAnimal *w_animal = new WrongAnimal();
    const WrongAnimal *w_cat = new WrongCat();

    std::cout << w_animal->getType() << " " << std::endl;
    std::cout << w_cat->getType() << " " << std::endl;
    w_cat->makeSound(); // will NOT output the cat sound!
    w_animal->makeSound();

    delete w_cat;
    delete w_animal;

    return 0;
}
