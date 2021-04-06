
#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		//Weapon(Weapon const& copy);
		~Weapon();
		//Weapon& operator=(Weapon const& copy);
		const std::string &getType() const;
		void setType(std::string type);
		std::string m_type;

	private:
};

#endif
