#pragma once

#include <iostream>
#include <string>

class Dummy : public ATarget
{
	public :

	Dummy();
	~Dummy();

	Dummy*	clone() const;
};