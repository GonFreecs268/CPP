#pragma once

#include <iostream>
#include <string>

class Fireball : public ASpell
{
	public :
	
	Fireball();
	~Fireball();

	Fireball*	clone() const;

};