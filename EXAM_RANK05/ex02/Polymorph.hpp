#pragma once

#include <iostream>
#include <string>

class Polymorph : public ASpell
{
	public :
	
	Polymorph();
	~Polymorph();

	Polymorph*	clone() const;

};