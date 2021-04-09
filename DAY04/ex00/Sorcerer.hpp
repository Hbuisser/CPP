
#ifndef SORCERER_HPP
#define SORCERER_HPP

# include <iostream>
# include <string>

# include "Victim.hpp"

// Polymorphisme :
// Un même morceau de code a eu deux comportements différents suivant le type passé en argument

class Sorcerer
{
	public:
		// on ne peut pas appeler de méthode virtuelle dans un constructeur.
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const& copy);
		// un destructeur doit toujours être virtuel si on utilise le polymorphisme
		~Sorcerer();
		Sorcerer& operator=(Sorcerer const& copy);

		void announce() const;
		void polymorph(Victim const&) const;

	private:
		std::string m_name;
		std::string m_title;
		Sorcerer();


};

std::ostream& operator<<(std::ostream &stream, Sorcerer const& copy);

#endif
