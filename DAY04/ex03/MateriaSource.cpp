
# include "MateriaSource.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		m_materia[i] = 0;
}

// COPY
MateriaSource::MateriaSource(MateriaSource const& copy)
{
	for (int i = 0; i < 4; i++)
		m_materia[i] = 0;
	*this = copy;
}

/*
** DESTRUCTOR
*/

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete m_materia[i];
}

/*
** OPERATORS
*/

// ASSIGNATION
MateriaSource& MateriaSource::operator=(MateriaSource const& copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
			delete m_materia[i];
		for (int i = 0; i < 4; i++)
			m_materia[i] = copy.m_materia[i]->clone();
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;

	while (i < 4 && m_materia[i])
		i++;
	if (m)
		m_materia[i] = m->clone();
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	
}