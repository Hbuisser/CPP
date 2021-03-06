
#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <string>
# include <stdio.h>
# include <math.h>

class Fixed
{
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float i);
		Fixed(Fixed const& copy);
		~Fixed();
		Fixed& operator=(Fixed const& copy);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		bool operator<(Fixed const& other) const;
		bool operator>(Fixed const& other) const;
		bool operator<=(Fixed const& other) const;
		bool operator>=(Fixed const& other) const;
		bool operator==(Fixed const& other) const;
		bool operator!=(Fixed const& other) const;

		Fixed operator+(Fixed const& other) const;
		Fixed operator-(Fixed const& other) const;
		Fixed operator*(Fixed const& other) const;
		Fixed operator/(Fixed const& other) const;

		Fixed& operator++();
		Fixed  operator++(int);
		Fixed& operator--();
		Fixed  operator--(int);

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(Fixed const& a, Fixed const& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(Fixed const& a, Fixed const& b);

	private:
		int 				m_fixedValue;
		static const int 	m_bitsNbr = 8;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed &f);

#endif
