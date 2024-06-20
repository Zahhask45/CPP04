#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "colors.hpp"

class Brain{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const std::string type);
	~Brain();
	Brain(const Brain &);

	Brain& operator=(const Brain &rhs);
	
	void showIdeas();
};

#endif