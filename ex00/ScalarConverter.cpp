/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:33:08 by fmoulin           #+#    #+#             */
/*   Updated: 2026/05/04 18:56:22 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
}


ScalarConverter &ScalarConverter::operator = (const ScalarConverter &src)
{
	(void)src;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	
}

static bool isPseudoLiteral(std::string const &src)
{
	return (src == "nan" || src == "nanf"
		|| src == "+inf" || src == "+inff"
		|| src == "-inf" || src == "-inff");
}

static bool	isChar(std::string const &src)
{
	return (src.length() == 3 && src[0] == '\'' && src[2] == '\'');
}

static bool hasF(std::string const &src)
{
	return (src.length() > 0 && src[src.length() - 1] == 'f');
}

static bool isIntLiteral(std::string const &src)
{
	if (src.empty())
		return false;
	
	size_t i = 0;

	if (src[0] == '+' || src[0] == '-')
	{
		if (src.length() == 1)
			return false;
		i = 1;
	}
	for (; i < src.length(); i++)
	{
		if (!isdigit(src[i]))
			return false;
	}
	return true;
}

static bool isDoubleLiteral(std::string const &src)
{
	if (src.empty())
		return false;

	size_t i = 0;
	int dotCount = 0;
	bool hasDigit = false;

	if (src[0] == '+' || src[0] == '-')
	{
		if (src.length() == 1)
			return false;
		i = 1;
	}

	for (; i < src.length(); i++)
	{
		if (src[i] == '.')
		{
			dotCount++;
			if (dotCount > 1)
				return false;
		}
		else if (isdigit(src[i]))
		{
			hasDigit = true;
		}
		else
			return false;
	}

	return (dotCount == 1 && hasDigit);
}

static bool isFloatLiteral(std::string const &src)
{
	if (src.empty())
		return false;
		
	if (src[src.length() - 1] != 'f')
		return false;
	
	size_t i = 0;
	int dotCount = 0;
	bool hasDigit = false;

	if (src[0] == '+' || src[0] == '-')
	{
		if (src.length() == 1)
			return false;
		i = 1;
	}


	for (; i < src.length() - 1; i++)
	{
		if (src[i] == '.')
		{
			dotCount++;
			if (dotCount > 1)
				return false;
		}
		else if (isdigit(src[i]))
		{
			hasDigit = true;
		}
		else
			return false;
	}

	return (dotCount == 1 && hasDigit);
}

static void	displayPseudoLiteral(std::string const &src)
{
	if (hasF(src))
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << src << std::endl;
		std::cout << "double: " << strtod(src.c_str(), NULL) << std::endl;
	}
	else
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << src << "f" << std::endl;
		std::cout << "double: " << src << std::endl;
	}
}

static void	displayChar(std::string const &src)
{
	char c = src[1];
	double	result = static_cast<double>(c);
	
	std::cout << "char: " << src << std::endl;
	std::cout << "int: " << static_cast<int>(result) << std::endl;
	std::cout << "float: " << static_cast<float>(result) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(result) << ".0" << std::endl;
}

static void	displayFloat(std::string const &src)
{
	double	result = strtod(src.c_str(), NULL);
	
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(result) << std::endl;
	std::cout << "float: " << src << std::endl;
	std::cout << "double: " << static_cast<double>(result) << std::endl;
}

static void	displayDouble(std::string const &src)
{
	double	result = strtod(src.c_str(), NULL);
	
	std::cout << "char: " << static_cast<char>(result) << std::endl;
	std::cout << "int: " << static_cast<int>(result) << std::endl;
	if (result == static_cast<int>(result))
		std::cout << "float: " << static_cast<float>(result) << ".0f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(result) << "f" << std::endl;
	std::cout << "double: " << src << std::endl;
}

static void	displayInt(std::string const &src)
{
	double	result = strtod(src.c_str(), NULL);
	
	std::cout << "char: " << static_cast<char>(result) << std::endl;
	std::cout << "int: " << src << std::endl;
	std::cout << "float: " << static_cast<float>(result) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(result) << ".0" << std::endl;
}

static void	displayInvalid(void)
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "impossible" << std::endl;
	std::cout << "double: " << "impossible" << std::endl;
}

void ScalarConverter::convert(std::string const &src)
{
	if (isPseudoLiteral(src))
	{
		displayPseudoLiteral(src);
		return ;
	}
	else if (isChar(src))
	{
		displayChar(src);
		return ;
	}
	else if (isFloatLiteral(src))
	{
		displayFloat(src);
		return ;
	}
	else if (isDoubleLiteral(src))
	{
		displayDouble(src);
		return ;
	}
	else if (isIntLiteral(src))
	{
		displayInt(src);
		return ;
	}
	else
	{
		displayInvalid();
		return ;
	}
}
