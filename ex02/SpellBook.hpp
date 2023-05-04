#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include "ASpell.hpp"
# include <map>

class	SpellBook
{
	private:
		SpellBook(const SpellBook &rhs);
		SpellBook &operator=(const SpellBook &rhs);
		std::map<std::string, ASpell*> _spells;
	
	public:
		SpellBook();
		~SpellBook();

		void	learnSpell(ASpell*);
		void	forgetSpell(const std::string &);
		ASpell	*createSpell(const std::string &);
		
};

#endif
