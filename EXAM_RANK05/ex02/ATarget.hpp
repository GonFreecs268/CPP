#pragma once

#include "iostream"
#include "string"

class ASpell;

class ATarget
{
	public :

	ATarget();
	ATarget(std::string type);
	ATarget(ATarget const &src);
	virtual ~ATarget();

	ATarget& operator=(ATarget const &rhs);

	std::string getType() const;

	virtual ATarget*	clone() const = 0;

	void	getHitBySpell(ASpell const &rhs) const;

	protected :

	std::string	_type;
};