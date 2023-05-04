#ifndef ATARGET_HPP
# define ATARGET_HPP

# include "ASpell.hpp"

class	ASpell;

class	ATarget
{
	private:
		std::string	_type;

	public:
		ATarget(const std::string &type);
		ATarget();
		ATarget(const ATarget &rhs);
		ATarget &operator=(const ATarget &rhs);
		virtual ~ATarget();
		
		const std::string	&getType() const;

		virtual ATarget	*clone() const = 0;
		void	getHitBySpell(const ASpell &rhs) const;
};

#endif
