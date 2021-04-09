
#ifndef AWEAPON_HPP
#define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	public:
		AWeapon();
		AWeapon(std::string const& name, int apcost, int damage);
		AWeapon(AWeapon const& copy);
		virtual ~AWeapon();
		AWeapon& operator=(AWeapon const& copy);

		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

	protected:
		std::string m_name;
		int 		m_damage;
		int 		m_apcost;
};

#endif
