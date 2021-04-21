
# include "Data.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Data::Data()
{
	
}

// COPY
Data::Data(Data const& copy)
{
	
}

/*
** DESTRUCTOR
*/

Data::~Data()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Data& Data::operator=(Data const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void Data::convert(std::string str)
{
	try
	{
		
	}
	catch (const std::exception &e)
	{	
		std::cerr << "ERROR : " << e.what() << std::endl;
	}
}
