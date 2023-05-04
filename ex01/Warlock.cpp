#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
{
	this->_name = name;
	this->_title = title;
	
	std::cout << this->_name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << this->_name << ": My job here is done!\n";
}
		
const std::string &Warlock::getName() const
{
	return (this->_name);
}

const std::string &Warlock::getTitle() const
{
	return (this->_title);
}

void Warlock::setTitle(const std::string &rhs)
{
	this->_title = rhs;
}

void Warlock::introduce() const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!\n";
}

void	Warlock::learnSpell(ASpell *rhs)
{
	if (rhs)
		this->_spells.insert(std::pair<std::string, ASpell*> (rhs->getName(), rhs->clone()));
}

void	Warlock::forgetSpell(const std::string name)
{
	std::map<std::string, ASpell*>::iterator it = this->_spells.find(name);

	if (it != this->_spells.end())
	{
		delete (it->second);
	}
	this->_spells.erase(it);
}

void	Warlock::launchSpell(const std::string name, const ATarget &rhs)
{
	std::map<std::string, ASpell*>::iterator it = this->_spells.find(name);

	if (it != this->_spells.end())
	{
		it->second->launch(rhs);
	}
}
