
# include "Character.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Character::Character()
{
	
}

Character::Character(std::string const & name) : m_name(name)
{
	m_ptr = 0;
	m_AP = 40;
}

// COPY
Character::Character(Character const&)
{
	
}

/*
** DESTRUCTOR
*/

Character::~Character()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Character& Character::operator=(Character const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void Character::recoverAP()
{
	m_AP += 10;
	if (m_AP > 40)
		m_AP = 40;
}

void Character::equip(AWeapon* weapon)
{
	m_ptr = weapon;
}

std::string Character::getWeaponName() const
{
	return (m_ptr->getName());
}

void Character::attack(Enemy* enemy)
{
	if (m_AP == 0)
		return ;
	if (m_ptr == 0)
		return ;
	if (m_ptr && m_AP >= m_ptr->getAPCost())
	{
		std::cout << getName() << " attaque " << enemy->getType() << " with a " << getWeaponName() << std::endl;
		m_ptr->attack();
		// retirerez les HP à l’ennemi basé sur les dégâts de l’arme
		enemy->takeDamage(m_ptr->getDamage());
		// Si les hp de l’ennemi passent à 0, vous devez le détruire.
		if (enemy->getHP() == 0)
			delete enemy;
		/// perds des AP avec l'utilisation de l'arme
		m_AP -= m_ptr->getAPCost();
	}
}

std::string const Character::getName() const
{
	return (m_name);
}

AWeapon *Character::getWeapon() const
{
	return (m_ptr);
}

int Character::getAP() const
{
	return (m_AP);
}

std::ostream &operator<<(std::ostream &stream, Character const &other)
{
	if (other.getWeapon() == 0)
		std::cout << other.getName() << " has " << other.getAP() << " AP and is unarmed" << std::endl;
	else 
		std::cout << other.getName() << " has " << other.getAP() << " AP and carries a " << other.getWeaponName() << std::endl;
	return (stream);
}