#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
private:
	std::string _type;
	ATarget() {}
	ATarget(ATarget &rhs) { *this = rhs; }
	ATarget &operator=(const ATarget &rhs)
	{
		if (this != &rhs)
			this->_type = rhs._type;
		return (*this);
	}

public:
	ATarget(std::string type);
	virtual ~ATarget();

	std::string getType() const;
	virtual ATarget *clone() const = 0;

	void getHitBySpell(ASpell &spell) const;
};

#endif