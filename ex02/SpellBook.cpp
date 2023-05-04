#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{}
		
void	SpellBook::learnSpell(ASpell *rhs)
{
	if (rhs)
		this->_spells.insert(std::pair<std::string, ASpell*> (rhs->getName(), rhs->clone()));
}

void	SpellBook::forgetSpell(const std::string &name)
{
	std::map<std::string, ASpell*>::iterator it = this->_spells.find(name);

	if (it != this->_spells.end())
	{
		delete (it->second);
	}
	this->_spells.erase(it);
}

ASpell	*SpellBook::createSpell(const std::string &name)
{
	std::map<std::string, ASpell*>::iterator it = this->_spells.find(name);

	if (it != this->_spells.end())
	{
		return (this->_spells[name]);
	}
	return (NULL);
}
