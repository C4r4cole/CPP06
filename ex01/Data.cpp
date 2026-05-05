/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:23:21 by fmoulin           #+#    #+#             */
/*   Updated: 2026/05/05 18:30:50 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Data.hpp"

Data::Data()
{
	
}

Data::Data(const Data &copy)
{
	*this = copy;
}


Data &Data::operator = (const Data &src)
{
	(void)src;
	return (*this);
}

Data::~Data()
{
	
}