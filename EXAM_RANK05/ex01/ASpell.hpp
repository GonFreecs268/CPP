#pragma once

#include <string>
#include <iostream>

class ATarget;

class ASpell 
{
	public :

	ASpell();
	ASpell(std::string name, std::string effects);
	ASpell(ASpell const &src);
	virtual ~ASpell();

	ASpell& operator=(ASpell const &rhs);

	std::string getName() const;
	std::string getEffects() const;

	virtual ASpell* clone() const = 0;

	void	launch(ATarget const &rhs) const;

	protected :

	std::string _name;
	std::string	_effects;
};