#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "SpellBook.hpp"
#include "TargetGenerator.hpp"

class SpellBook;

class Warlock
{
private:
	std::string _name;
	std::string _title;
	SpellBook _spellBook;

	Warlock() {}
	Warlock(Warlock &rhs) { *this = rhs; }
	Warlock &operator=(const Warlock &rhs)
	{
		if (this != &rhs)
			this->_name = rhs._name;
		return (*this);
	}

public:
	Warlock(std::string name, std::string title);
	~Warlock();

	const std::string &getName() const;
	const std::string &getTitle() const;
	void setTitle(std::string title);

	void introduce() const;

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spellName);
	void launchSpell(std::string spellName, ATarget &target);
};

#endif