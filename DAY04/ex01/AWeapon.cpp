
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
AWeapon::AWeapon(AWeapon const&)
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
	if (this != &copy)
	{
		
	}
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

//void attack() const = 0