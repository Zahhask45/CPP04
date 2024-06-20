#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {

    std::cout << "--------------Subject example-----------------" << std::endl;

    const AAnimal *j = new Dog();
    const AAnimal *i = new Cat();

    j->makeSound();
    i->makeSound();

    delete j; // should not create a leak
    delete i;

    std::cout << "-------------Array of Animals--------------" << std::endl;

    const AAnimal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }

    std::cout << "--------------Deep copy brain-----------------" << std::endl;

    Brain *first = new Brain();
    Brain *second = new Brain();

    first->showIdeas();

    *second = *first; // will make a deep copy
    delete first;

    second->showIdeas(); // without deep copy, this would give a seg fault
    delete second;

    std::cout << "--------------Deep copy Dog-----------------" << std::endl;

    const Dog *dogOne = new Dog();
    const Dog *dogTwo = new Dog(*dogOne);

    delete dogOne;
    delete dogTwo; // should not create a leak

    std::cout << "--------------Deep copy Cat-----------------" << std::endl;

    const Cat *catOne = new Cat();
    const Cat *catTwo = new Cat(*catOne);

    delete catOne;
    delete catTwo; // should not create a leak

    return 0;
}
