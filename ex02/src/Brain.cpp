#include "Brain.hpp"

Brain::Brain(){
	std::cout << "[Brain constructor]" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = "Random Animal Idea";
	
}

Brain::Brain(std::string type){
	std::cout << "[Brain constructor]" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = "Random " + type + "Idea";
	
}

Brain::~Brain(){
	std::cout << "[Brain destructor]" << std::endl;
}

Brain::Brain(const Brain &src){
	std::cout << "[Brain copy constructor]" << std::endl;
	*this = src;
}

Brain& Brain::operator=(const Brain &rhs){
	std::cout << "[Brain operator=]" << std::endl;
	if (this != &rhs)
	{
		for (size_t i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
		
	}
	return *this;
}

void Brain::showIdeas(){
	for (size_t i = 0; i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
}

