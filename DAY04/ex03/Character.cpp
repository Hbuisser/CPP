
# include "Character.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Character::Character() : m_name("no_name")
{
	for (int i = 0; i < 4; i++)
		m_materia[i] = 0;
}

Character::Character(std::string name) : m_name(name)
{
	for (int i = 0; i < 4; i++)
		m_materia[i] = 0;
}

// COPY
Character::Character(Character const& copy) : m_name(copy.m_name)
{
	for (int i = 0; i < 4; i++)
		this->m_materia[i] = copy.m_materia[i];
	*this = copy;
}

/*
** DESTRUCTOR
*/

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->m_materia[i])
			delete this->m_materia[i];
}

/*
** OPERATORS
*/

// ASSIGNATION
Character& Character::operator=(Character const& copy)
{
	int i = 0;

	while (i < 4 && this->m_materia[i])
	{
		delete this->m_materia[i];
		i++;
	}
	this->m_name = copy.m_name;
	i = 0;
	while (i < 4 && this->m_materia[i])
	{
		this->m_materia[i] = copy.m_materia[i]->clone();
		i++;
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