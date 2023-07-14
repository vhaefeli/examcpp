
#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "Warlock.hpp"

class SpellBook
{
private:
	SpellBook(SpellBook &rhs) { *this = rhs; }
	SpellBook &operator=(const SpellBook &rhs)
	{
		if (this != &rhs)
			this->spellList = rhs.spellList;
		return (*this);
	}

public:
	std::vector<ASpell *> spellList;

	SpellBook() {}
	~SpellBook();

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spellName);
	ASpell *createSpell(std::string const &spellName);
};

#endif