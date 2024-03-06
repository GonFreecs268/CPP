#include "Warlock.hpp"

SpellBook::SpellBook() {}

SpellBook::SpellBook(SpellBook const &src) {

	*this = src;
}

SpellBook&	SpellBook::operator=(SpellBook const &rhs) {

	if (this != &rhs)
		this->_book = rhs._book;
	return (*this);
}

SpellBook::~SpellBook() {

	for (std::map<std::string, ASpell*>::iterator it = this->_book.begin(); it != _book.end(); it++)
	{
		delete it->second;
	}
	_book.clear();
}

void	SpellBook::learnSpell(ASpell *spell) {

	if (spell)
		_book[spell->getName()] = spell->clone();	
}

void	SpellBook::forgetSpell(std::string const spell) {

	std::map<std::string, ASpell*>::iterator it = _book.find(spell);
	if (it != _book.end())
	{
		delete it->second;
		_book.erase(it);
	}
}

ASpell* SpellBook::createSpell(std::string const &spell) {

	ASpell *tmp = NULL;
	if (_book.find(spell) != _book.end())
		tmp = _book[spell];
	return (tmp);
}