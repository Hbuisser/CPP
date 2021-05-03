
#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

# include <iostream>
# include <string>

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(RadScorpion const& copy);
		virtual ~RadScorpion();
		RadScorpion& operator=(RadScorpion const& copy);

	private:


};

#endif
