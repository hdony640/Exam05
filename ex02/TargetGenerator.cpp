#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{}
		
void	TargetGenerator::learnTargetType(ATarget *rhs)
{
	if (rhs)
		this->_targets.insert(std::pair<std::string, ATarget*> (rhs->getType(), rhs->clone()));
}

void	TargetGenerator::forgetTargetType(const std::string &name)
{
	std::map<std::string, ATarget*>::iterator it = this->_targets.find(name);

	if (it != this->_targets.end())
	{
		delete (it->second);
	}
	this->_targets.erase(it);
}

ATarget	*TargetGenerator::createTarget(const std::string &name)
{
	std::map<std::string, ATarget *>::iterator it = this->_targets.find(name);
    if (it != this->_targets.end())
        return this->_targets[name];
    return NULL;
}
