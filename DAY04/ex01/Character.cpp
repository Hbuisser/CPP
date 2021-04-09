
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
	if (m_AP <= 30)
		m_AP += 10;
	else 
		m_AP = 40;
}

void Character::equip(AWeapon*)
{
	//m_ptr = new AWeapon;
	//*m_ptr = *weapon;
}

void Character::attack(Enemy* enemy)
{
	if (m_AP == 0)
		return ;
	// Si aucune arme n’est équippée, attack() ne fait rien
	if (m_ptr == 0)
		return ;
	std::cout << getName() << " attaque " << enemy->getType() << " with a " << std::endl;
	// appel attack() de l’arme actuelle
		//ptr.attack();
	// retirerez les HP à l’ennemi basé sur les dégâts de l’arme
	// Si les hp de l’ennemi passent à 0, vous devez le détruire.
	/// perds des AP avec l'utilisation de l'arme

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
	return (stream);
}