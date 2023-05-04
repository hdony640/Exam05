# include "ATarget.hpp"

ATarget::ATarget(const std::string &type)
{
	this->_type = type;
}

ATarget::ATarget() {}

ATarget::ATarget(const ATarget &rhs)
{
	*this = rhs;
}

ATarget &ATarget::operator=(const ATarget &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return (*this);
}

ATarget::~ATarget() {}
		
const std::string &ATarget::getType() const
{
	return (this->_type);
}

void	ATarget::getHitBySpell(const ASpell &rhs) const
{
	std::cout << this->_type << " has been " << rhs.getEffects() << "!\n";
}
