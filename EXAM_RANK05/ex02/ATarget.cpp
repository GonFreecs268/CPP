#include "Warlock.hpp"

ATarget::ATarget() {

}

ATarget::ATarget(std::string type) : _type(type) {

}

ATarget::ATarget(ATarget const &src) : _type(src._type) {

}

ATarget::~ATarget() {

}

std::string	ATarget::getType() const {

	return (this->_type);
}

ATarget&	ATarget::operator=(ATarget const &rhs) {

	if (this != &rhs)
		this->_type = rhs._type;

	return (*this);
}

void	ATarget::getHitBySpell(ASpell const &rhs) const {

	std::cout << this->_type << "has been " << rhs.getEffects() << "!" << std::endl; 
}
