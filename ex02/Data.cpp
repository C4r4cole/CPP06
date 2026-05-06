/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:23:21 by fmoulin           #+#    #+#             */
/*   Updated: 2026/05/06 13:08:12 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Data.hpp"

Data::Data()
{
	
}

Data::Data(std::string name) : _name(name), _pace(0)
{
	
}

Data::Data(const Data &copy)
{
	*this = copy;
}


Data &Data::operator = (const Data &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_pace = src._pace;	
	}
	return (*this);
}

Data::~Data()
{
	
}