
# include "Enemy.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Enemy::Enemy()
{
	
}

Enemy::Enemy(int hp, std::string const& type) : m_hp(hp), m_type(type)
{

}

// COPY
Enemy::Enemy(Enemy const& copy) : m_hp(copy.m_hp), m_type(copy.m_type)
{
	
}

/*
** DESTRUCTOR
*/

Enemy::~Enemy()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Enemy& Enemy::operator=(Enemy const& copy)
{
	if (this != &copy)
	{
		*this = copy;
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

std::string Enemy::getType() const
{
	return m_type;
}

int Enemy::getHP() const
{
	return m_hp;
}

void Enemy::takeDamage(int i)
{
	if (i < 0)
		return ;
	if (i > 0)
		m_hp -= i;
	if (m_hp < 0)
		m_hp = 0;
}