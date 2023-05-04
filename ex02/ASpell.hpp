#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class	ASpell
{
	private:
		std::string	_name;
		std::string	_effects;

	public:
		ASpell(const std::string &name, const std::string &effects);
		ASpell();
		ASpell(const ASpell &rhs);
		ASpell &operator=(const ASpell &rhs);
		virtual ~ASpell();
		
		const std::string	&getName() const;
		const std::string	&getEffects() const;

		virtual ASpell	*clone() const = 0;
		void	launch(const ATarget &rhs) const;
};

#endif
