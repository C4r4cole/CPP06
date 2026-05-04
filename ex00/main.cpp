/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:32:59 by fmoulin           #+#    #+#             */
/*   Updated: 2026/05/04 18:45:46 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main()
{
	ScalarConverter::convert("42");
	std::cout << std::endl;
	ScalarConverter::convert("42.0");
	std::cout << std::endl;
	ScalarConverter::convert("42.5");
	std::cout << std::endl;
	ScalarConverter::convert("4.2f");
	std::cout << std::endl;
	ScalarConverter::convert("'c'");
	std::cout << std::endl;
	ScalarConverter::convert("65");
	std::cout << std::endl;
}
