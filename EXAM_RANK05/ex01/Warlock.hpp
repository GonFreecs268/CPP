#pragma once

#include <string>
#include <iostream>
#include "map"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"


class Warlock
{
	public :

	Warlock(std::string _name, std::string _title);
	~Warlock();


	std::string	const &getName() const;
	std::string const &getTitle() const;

	void	setTitle(std::string const &_string);

	void	introduce() const;
	void	learnSpell(ASpell *spell);
	void	forgetSpell(std::string const spell);
	void	launchSpell(std::string spell, ATarget const &target);

	private :

	std::string	name;
	std::string	title;
	std::map<std::string, ASpell*>	book;	

	Warlock();
	Warlock(Warlock const &src);
	Warlock &operator=(Warlock const &rhs);
};ATarg