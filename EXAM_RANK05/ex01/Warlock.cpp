#include "Warlock.hpp"

Warlock::Warlock() : name("noname"), title("none") {

	return ;
}

Warlock::Warlock(std::string _name, std::string _title) : name(_name), title(_title) {

	std::cout << name << ": This looks like another boring day." << std::endl;
	return ;
} 

Warlock::Warlock(Warlock const &src) : name(src.name), title(src.title) {

}

Warlock&	Warlock::operator=(Warlock const &rhs) {

	if (this != &rhs)
	{
		this->name = rhs.name;
		this->title = rhs.title;
	}
	return (*this);
}

Warlock::~Warlock() {

	std::cout << name << ": My job here is done!" << std::endl;
	for (std::map<std::string, ASpell*>::iterator it = this->book.begin(); it != this->book.end(); it++)
	{
		delete it->second;
	}
	this->book.clear();
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

void	Warlock::learnSpell(ASpell *spell) {

	if (spell)
	{
		if (book.find(spell->getName()) == book.end())
			book[spell->getName()] = spell->clone();
	}
}

void Warlock::forgetSpell(std::string const spell) {

	if (book.find(spell) != book.end())
		book.erase(book.find(spell));
}

void Warlock::launchSpell(std::string spell, ATarget const &target)  {

	if (book.find(spell) != book.end())
		book[spell]->launch(target);
}