#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include "ATarget.hpp"
# include <map>

class	TargetGenerator
{
	private:
		TargetGenerator(const TargetGenerator &rhs);
		TargetGenerator &operator=(const TargetGenerator &rhs);
		std::map<std::string, ATarget*> _targets;
	
	public:
		TargetGenerator();
		~TargetGenerator();

		void	learnTargetType(ATarget*);
		void	forgetTargetType(const std::string &);
		ATarget	*createTarget(const std::string &);
		
};

#endif
