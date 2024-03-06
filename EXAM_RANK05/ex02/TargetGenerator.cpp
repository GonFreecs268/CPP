#include "Warlock.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::TargetGenerator(TargetGenerator const &src) {

	*this = src;
}

TargetGenerator& TargetGenerator::operator=(TargetGenerator const &rhs) {

	if (this != &rhs)
	{
		_target = rhs._target;
	}
	return (*this);
}

TargetGenerator::~TargetGenerator() {

	for (std::map<std::string, ATarget*>::iterator it = _target.begin(); it != _target.end(); it++)
	{
		delete it->second;
	}
	_target.clear();
}

void TargetGenerator::learnTargetType(ATarget *target) {

	if (target)
		_target[target->getType()] = target->clone();
}

void	TargetGenerator::forgetTarget(std::string const &target) {

	std::map<std::string, ATarget*>::iterator it = _target.find(target);
	if (it != _target.end())
	{
		delete it->second;
		_target.erase(it);
	}
}

ATarget*	TargetGenerator::createTarget(std::string const &target) {

	ATarget	*tmp = NULL;
	if (_target.find(target) != _target.end())	
		tmp = _target[target];
	return (tmp);

}