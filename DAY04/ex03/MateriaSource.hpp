
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include <iostream>
# include <string>

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& copy);
		~MateriaSource();
		MateriaSource& operator=(MateriaSource const& copy);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria *m_materia[4];

};

#endif
