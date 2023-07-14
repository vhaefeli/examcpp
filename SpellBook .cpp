
#include "SpellBook.hpp"

SpellBook::~SpellBook()
{
}

void SpellBook::learnSpell(ASpell *spell)
{
	std::vector<ASpell *>::const_iterator it(this->spellList.begin());
	for (; it != this->spellList.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return;
	}
	this->spellList.push_back(spell);
}
void SpellBook::forgetSpell(std::string const &spellName)
{
	std::vector<ASpell *>::const_iterator it(this->spellList.begin());
	for (; it != this->spellList.end(); it++)
	{
		if ((*it)->getName() == spellName)
		{
			it = spellList.erase(it);
			break;
		}
	}
}
ASpell *SpellBook::createSpell(std::string const &spellName)
{

	std::vector<ASpell *>::const_iterator it(this->spellList.begin());

	for (; it != this->spellList.end(); it++)
	{
		if ((*it)->getName() == spellName)
			return (*it);
	}
}