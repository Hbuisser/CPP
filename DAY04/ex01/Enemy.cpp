
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
Enemy::Enemy(Enemy const&)
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
		m_hp -= i;
	if (m_hp < 0)
		m_hp = 0;
}