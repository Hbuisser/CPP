
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include <string>

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	public:
		Character(std::string const& name);
		Character(Character const& copy);
		~Character();
		Character& operator=(Character const& copy);

		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		//first const meaning : return value / second const : the values in class do not change
		std::string const getName() const;

		AWeapon *getWeapon() const;
		std::string getWeaponName() const;
		int getAP() const;

	private:
		Character();
		std::string m_name;
		int 		m_AP;
		AWeapon 	*m_ptr;
};

std::ostream &operator<<(std::ostream &stream, Character const &other);

#endif
