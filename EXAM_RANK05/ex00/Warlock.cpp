#include "Warlock.hpp"

Warlock::Warlock() : name("noname"), title("none") {

	std::cout << "Default Constructor Called" << std::endl;
	return ;
}

Warlock::Warlock(std::string _name, std::string _title) : name(_name), title(_title) {

	std::cout << name << ": This looks like another boring day." << std::endl;
	return ;
} 

Warlock::Warlock(Warlock const &src) : name(src.name), title(src.title) {

	std::cout << "Copy Constructor Called" << std::endl;
}

Warlock&	Warlock::operator=(Warlock const rhs) {

	if (this != &rhs)
	{
		this->name = rhs.name;
		this->title = rhs.title;
	}
	return (*this);
}

Warlock::~Warlock() {

	std::cout << name << ": My job here is done!" << std::endl;
}

void	Warlock::setTitle(std::string const &_string) {

	this->title = _string;
}

std::string	const &Warlock::getName() const {

	return (this->name);
}

std::string const &Warlock::getTitle() const {

	return (this->title);
}

void	Warlock::introduce() const {

	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl; 
}
