
#ifndef VICTIM_HPP
#define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	public:
		Victim();
		Victim(std::string);
		Victim(Victim const& copy);
		virtual ~Victim();
		Victim& operator=(Victim const& copy);

		void announce() const;
		virtual void getPolymorphed() const;

	private:
		std::string m_name;

};

std::ostream& operator<<(std::ostream &stream, Victim const& copy);

#endif
