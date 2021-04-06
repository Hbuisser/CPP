
# include "Fixed.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Fixed::Fixed() : m_fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// COPY
Fixed::Fixed(Fixed const& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	//This keyword refers to the object itself
	*this = copy;
}

/*
** DESTRUCTOR
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
Fixed& Fixed::operator=(Fixed const& copy)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &copy)
	{
		
	}
	m_fixedValue = copy.getRawBits();
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_fixedValue);
}

void Fixed::setRawBits(int const raw)
{
	m_fixedValue = raw;
}
