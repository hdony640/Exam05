# include "ASpell.hpp"

ASpell::ASpell(const std::string &name, const std::string &effects)
{
	this->_name = name;
	this->_effects = effects;
}

ASpell::ASpell() {}

ASpell::ASpell(const ASpell &rhs)
{
	*this = rhs;
}

ASpell &ASpell::operator=(const ASpell &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_effects = rhs.getEffects();
	}
	return (*this);
}

ASpell::~ASpell() {}
		
const std::string &ASpell::getName() const
{
	return (this->_name);
}

const std::string &ASpell::getEffects() const
{
	return (this->_effects);
}

void	ASpell::launch(const ATarget &rhs) const
{
	rhs.getHitBySpell(*this);
}
