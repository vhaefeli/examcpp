#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
private:
	std::string _name;
	std::string _effects;
	ASpell() {}
	ASpell(ASpell &rhs) { *this = rhs; }
	ASpell &operator=(const ASpell &rhs)
	{
		if (this != &rhs)
			this->_name = rhs._name;
		return (*this);
	}

public:
	ASpell(std::string name, std::string effects);
	virtual ~ASpell();

	std::string getName() const;
	std::string getEffects() const;
	virtual ASpell *clone() const = 0;

	void launch(ATarget &target);
};

#endif