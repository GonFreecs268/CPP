#pragma once

#include <iostream>
#include <string>

class BrickWall : public ATarget
{
	public :

	BrickWall();
	~BrickWall();

	BrickWall*	clone() const;
};