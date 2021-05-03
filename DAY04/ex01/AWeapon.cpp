
# include "AWeapon.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
AWeapon::AWeapon()
{
	
}

AWeapon::AWeapon(std::string const& name, int apcost, int damage) : m_name(name), m_damage(damage), m_apcost(apcost)
{

}

// COPY
AWeapon::AWeapon(AWeapon const& copy) : m_name(copy.m_name), m_damage(copy.m_damage), m_apcost(copy.m_apcost)
{
	
}

/*
** DESTRUCTOR
*/

AWeapon::~AWeapon()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
AWeapon& AWeapon::operator=(AWeapon const& copy)
{
	m_name = copy.m_name;
	m_apcost = copy.m_apcost;
	m_damage = copy.m_damage;

	return *this;
}

/*
** MEMBER FUNCTIONS
*/

std::string AWeapon::getName() const
{
	return (m_name);
}

int AWeapon::getAPCost() const
{
	return (m_apcost);
}

int AWeapon::getDamage() const
{
	return (m_damage);
}
