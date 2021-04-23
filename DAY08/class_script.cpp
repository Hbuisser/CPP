/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_script.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-eyn <mvan-eyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:36:29 by mvan-eyn          #+#    #+#             */
/*   Updated: 2021/03/12 12:13:26 by mvan-eyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <iostream>
# include <sys/stat.h>
# include <fstream>
# include <sstream>

std::string		toUpperStr(std::string str)
{
	std::string strUp;
	for (int  i = 0; i < str.size(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			strUp += str[i] - 32;
		else
			strUp += str[i];
	}
	return strUp;
}

int main(int argc, char **argv)
{
    
    for (int i = 2; i < argc; i++)
    {
		// NAME.HPP
		std::ofstream hpp_file(std::string(argv[1]) + std::string(argv[i]) + ".hpp");
		hpp_file << std::endl;
		hpp_file << "#ifndef " << toUpperStr((std::string)argv[i]) << "_HPP" << std::endl;
		hpp_file << "#define " << toUpperStr((std::string)argv[i]) << "_HPP" << std::endl;
		hpp_file << std::endl;
		hpp_file << "# include <iostream>" << std::endl;
		hpp_file << "# include <string>" << std::endl;
		hpp_file << std::endl;
		hpp_file << "class " << argv[i] << std::endl;
		hpp_file << "{" << std::endl;
		hpp_file << "	public:" << std::endl;
		hpp_file << "		" << argv[i] << "();" << std::endl;
		hpp_file << "		" << argv[i] << "(" << argv[i] << " const& copy);" << std::endl;
		hpp_file << "		~" << argv[i] << "();" << std::endl;
		hpp_file << "		" << argv[i] << "& operator=(" << argv[i] << " const& copy);" << std::endl;
		hpp_file << std::endl;
		hpp_file << "	private:" << std::endl;
		hpp_file << std::endl;
		hpp_file << std::endl;
		hpp_file << "};" << std::endl;
		hpp_file << std::endl;
		hpp_file << "#endif" << std::endl;

		// NAME.CPP
		std::ofstream cpp_file(std::string(argv[1]) + std::string(argv[i]) + ".cpp");
		cpp_file << std::endl;
		cpp_file << "# include \"" << argv[i] << ".hpp\"" << std::endl;
		cpp_file << std::endl;
		cpp_file << "/*" << std::endl;
		cpp_file << "** CONSTRUCTORS" << std::endl;
		cpp_file << "*/" << std::endl;
		cpp_file << std::endl;
		cpp_file << "// DEFAULT" << std::endl;
		cpp_file << argv[i] << "::" << argv[i] << "()" << std::endl;
		cpp_file << "{" << std::endl;
		cpp_file << "	" << std::endl;
		cpp_file << "}" << std::endl;
		cpp_file << std::endl;
		cpp_file << "// COPY" << std::endl;;
		cpp_file << argv[i] << "::" << argv[i] << "(" << argv[i] << " const& copy)" << std::endl;
		cpp_file << "{" << std::endl;
		cpp_file << "	" << std::endl;
		cpp_file << "}" << std::endl;
		cpp_file << std::endl;
		cpp_file << "/*" << std::endl;
		cpp_file << "** DESTRUCTOR" << std::endl;
		cpp_file << "*/" << std::endl;
		cpp_file << std::endl;
		cpp_file << argv[i] << "::~" << argv[i] << "()"	<< std::endl;
		cpp_file << "{" << std::endl;
		cpp_file << "	" << std::endl;
		cpp_file << "}" << std::endl;
		cpp_file << std::endl;
		cpp_file << "/*" << std::endl;
		cpp_file << "** OPERATORS" << std::endl;
		cpp_file << "*/" << std::endl;
		cpp_file << std::endl;
		cpp_file << "// ASSIGNATION" << std::endl;
		cpp_file << argv[i] << "& " << argv[i] << "::operator=(" << argv[i] << " const& copy)" << std::endl;
		cpp_file << "{" << std::endl;
		cpp_file << "	if (this != &copy)" << std::endl;
		cpp_file << "	{" << std::endl;
		cpp_file << "		" << std::endl;
		cpp_file << "	}" << std::endl;
		cpp_file << "	return *this;" << std::endl;
		cpp_file << "}" << std::endl;
		cpp_file << std::endl;
		cpp_file << "/*" << std::endl;
		cpp_file << "** MEMBER FUNCTIONS" << std::endl;
		cpp_file << "*/" << std::endl;
		cpp_file << std::endl;
    }

    return (0);
}