#include "Warlock.hpp"

ASpell::ASpell() : _name("none"), _effects("noeffect") {

}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {

}

ASpell::ASpell(ASpell const &src) : _name(src._name), _effects(src._effects) {

}

ASpell::~ASpell() {

}

std::string ASpell::getName() const {

	return (this->_name);
}

std::string ASpell::getEffects() const {

	return (this->_effects);
}

ASpell&	ASpell::operator=(ASpell const &rhs) {

	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_effects = rhs._effects;
	}

	return (*this);
}

void	ASpell::launch(ATarget const &rhs) const {

	rhs.getHitBySpell(*this);
}	

