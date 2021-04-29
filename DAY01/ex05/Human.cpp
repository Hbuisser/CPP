
# include "Human.hpp"

Human::Human()
{
	std::cout << "Human++" << std::endl;
}

Human::~Human()
{
	std::cout << "Human--" << std::endl;
}

Human& Human::operator=(Human const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

const Brain &Human::getBrain() const 
{
	return this->m_brain;
}

const Brain *Human::identify() const
{
	return this->m_brain.identify();
}
