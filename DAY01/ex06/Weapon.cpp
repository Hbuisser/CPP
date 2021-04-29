
# include "Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string type) : m_type(type)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
	this->m_type = type;
}

const std::string &Weapon::getType() const
{
	return (this->m_type);
}