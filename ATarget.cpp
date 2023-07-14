#include "ATarget.hpp"

ATarget::ATarget(std::string type)
	: _type(type) {}

ATarget::~ATarget() {}

std::string ATarget::getType() const
{
	return (_type);
}

void ATarget::getHitBySpell(ASpell &spell) const
{
	std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
}