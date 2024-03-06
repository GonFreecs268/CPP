#pragma once

#include <string>
#include <iostream>

class Warlock
{
	public :

	Warlock(std::string _name, std::string _title);
	~Warlock();


	std::string	const &getName() const;
	std::string const &getTitle() const;

	void	setTitle(std::string const &_string);

	void	introduce() const;

	private :

	std::string	name;
	std::string	title;

	Warlock();
	Warlock(Warlock const &src);
	Warlock &operator=(Warlock const &rhs);

};