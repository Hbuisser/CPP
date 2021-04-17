
# include "MateriaSource.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
MateriaSource::MateriaSource()
{
	m_materias = new materias;
	m_materias->object = nullptr;
	m_materias->next = nullptr;
}

// COPY
MateriaSource::MateriaSource(MateriaSource const& )
{
	
}

/*
** DESTRUCTOR
*/

MateriaSource::~MateriaSource()
{
	materias *iter;

	while (m_materias != nullptr)
	{
		delete m_materias->object;
		iter = m_materias;
		m_materias = m_materias->next;
		delete iter;
	}
}

/*
** OPERATORS
*/

// ASSIGNATION
MateriaSource& MateriaSource::operator=(MateriaSource const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void MateriaSource::learnMateria(AMateria* m)
{
	if (m_materias->object == nullptr)
	{
		m_materias->object = m;
	}
}

// AMateria* MateriaSource::createMateria(std::string const & type)
// {
	
// }