 #pragma once

#include <iostream>
#include <string>
#include <map>


class SpellBook
{
	public :

	SpellBook();
	~SpellBook();

	void	learnSpell(ASpell *spell);
	void	forgetSpell(std::string const spell);
	ASpell*	createSpell(std::string const &spell);

	private :

	SpellBook(SpellBook const &src);

	SpellBook&	operator=(SpellBook const &rhs);

	std::map<std::string, ASpell*>	_book;
};