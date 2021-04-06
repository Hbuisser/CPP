
#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		std::string amygdal;
		std::string cortex;

		Brain();
		//Brain(Brain const& copy);
		~Brain();
		Brain& operator=(Brain const& copy);
		Brain *identify();
	private:

};

#endif
