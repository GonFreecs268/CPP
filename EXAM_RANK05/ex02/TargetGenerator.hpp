#pragma once

#include <map>

class  TargetGenerator
{
	public :

	TargetGenerator();
	~TargetGenerator();

	void		learnTargetType(ATarget *target);
	void		forgetTarget(std::string const &target);
	ATarget*	createTarget(std::string const &target);

	private :

	std::map<std::string, ATarget*>	_target;

	TargetGenerator(const TargetGenerator &src);
	TargetGenerator&	operator=(const TargetGenerator &rhs);

};
