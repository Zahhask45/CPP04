#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#define _END			"\033[0m"
#define _BOLD			"\033[1m"
#define _UNDER			"\033[4m"

#define _REV			"\033[7m"
#define _BLACK			"\033[0;30m"
#define _RED			"\033[0;31m"
#define _GREEN			"\033[0;32m"
#define _YELLOW			"\033[0;33m"
#define _BLUE			"\033[0;34m"
#define _PURPLE			"\033[0;35m"
#define _CYAN			"\033[0;36m"
#define _WHITE			"\033[0;37m"


#include <iostream>
#include <string>


class Animal{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &);
	Animal &operator=(const Animal &rhs);

	virtual void makeSound() const;
	std::string getType() const;
};


#endif
