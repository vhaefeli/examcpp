
#ifndef TargetGenerator_HPP
#define TargetGenerator_HPP

#include "ATarget.hpp"
#include <vector>
class ATarget;

class TargetGenerator
{
private:
	std::vector<ATarget *> targetList;

	TargetGenerator(TargetGenerator &rhs) { *this = rhs; }
	TargetGenerator &operator=(const TargetGenerator &rhs)
	{
		if (this != &rhs)
			this->targetList = rhs.targetList;
		return (*this);
	}

public:
	TargetGenerator() {}
	~TargetGenerator();

	void learnTargetType(ATarget *target);
	void forgetTargetType(std::string const &targetName);
	ATarget *createTarget(std::string const &targetName);
};

#endif