
#ifndef ENEMY_HPP
#define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	public:
		Enemy();
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const& copy);
		~Enemy();
		Enemy& operator=(Enemy const& copy);

		std::string getType() const;
		int getHP() const;

		virtual void takeDamage(int);

	protected:
		int 		m_hp;
		std::string	m_type;


};

#endif
