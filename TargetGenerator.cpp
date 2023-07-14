
#include "TargetGenerator.hpp"

TargetGenerator::~TargetGenerator()
{
}

void learnTargetType(ATarget *target)
{

	for (std::vector<ATarget *>::iterator it(this->targetList.begin()); it != this->targetList.end(); it++)
	{
		if ((*it)->getType() == target->getType())
			return;
	}
	this->targetList.push_back(target);
}
void forgetTargetType(std::string const &targetName)
{
	std::vector<ATarget *>::const_iterator it(this->targetList.begin());
	for (; it != this->targetList.end(); it++)
	{
		if ((*it)->getType() == targetName)
		{
			it = targetList.erase(it);
			break;
		}
	}
}
ATarget *createTarget(std::string const &targetName)
{

	std::vector<ATarget *>::const_iterator it(this->targetList.begin());

	for (; it != this->targetList.end(); it++)
	{
		if ((*it)->getType() == targetName)
			return (*it);
	}
}