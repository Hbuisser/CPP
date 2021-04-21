
#ifndef DATA_HPP
#define DATA_HPP

# include <iostream>
# include <string>

class Data
{
	public:
		Data();
		Data(Data const& copy);
		~Data();
		Data& operator=(Data const& copy);

		void convert(std::string str);
		

	private:


};

#endif
