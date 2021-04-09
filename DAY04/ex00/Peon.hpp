
#ifndef PEON_HPP
#define PEON_HPP

# include <iostream>
# include <string>

# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon();
		Peon(std::string name);
		Peon(Peon const& copy);
		virtual ~Peon();
		Peon& operator=(Peon const& copy);

		virtual void getPolymorphed() const;

	private:
		std::string m_name;


};

#endif
