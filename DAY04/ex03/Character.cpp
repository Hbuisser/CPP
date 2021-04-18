
# include "Character.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Character::Character(std::string name) : m_name(name)
{
	for (int i = 0; i < 4; i++)
		m_materia[i] = 0;
}

// COPY
Character::Character(Character const& copy) : m_name(copy.m_name)
{
	for (int i = 0; i < 4; i++)
		m_materia[i] = 0;
	*this = copy;
}

/*
** DESTRUCTOR
*/

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete m_materia[i];
}

/*
** OPERATORS
*/

// ASSIGNATION
Character& Character::operator=(Character const& copy)
{
	if (this != &copy)
	{
		m_name = copy.m_name;
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

void Character::equip(AMateria* m)
{
	int i = 0;
	int done = 0;

	while (i < 4 && !done)
	{
		if (!m_materia[i])
		{
			m_materia[i] = m;
			done = 1;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	if (m_materia[idx])
		m_materia[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx >= 0 && m_materia[idx])
		m_materia[idx]->use(target);
}

std::string const& Character::getName() const
{
	return (m_name);
}