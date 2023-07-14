#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title)
	: _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const
{
	return (_name);
}

const std::string &Warlock::getTitle() const
{
	return (_title);
}

void Warlock::setTitle(std::string title)
{
	this->_title = title;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	_spellBook.learnSpell(spell);
}
void Warlock::forgetSpell(std::string spellName)
{
	_spellBook.forgetSpell(spellName);
}
void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	ASpell *lSpell = _spellBook.createSpell(spellName);
	lSpell->launch(target);
}