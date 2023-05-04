#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "SpellBook.hpp"

class	Warlock
{
	private:
		std::string	_name;
		std::string	_title;
		SpellBook	_book;

		Warlock();
		Warlock(const Warlock &rhs);
		Warlock &operator=(const Warlock &rhs);

	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();
		
		const std::string	&getName() const;
		const std::string	&getTitle() const;
		void				setTitle(const std::string &rhs);
		void 				introduce() const;
		void				learnSpell(ASpell *);
		void				forgetSpell(const std::string name);
		void				launchSpell(const std::string name, const ATarget &rhs);
};

#endif
