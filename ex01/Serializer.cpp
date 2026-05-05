/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:33:08 by fmoulin           #+#    #+#             */
/*   Updated: 2026/05/05 17:58:25 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	
}

Serializer::Serializer(const Serializer &copy)
{
	*this = copy;
}


Serializer &Serializer::operator = (const Serializer &src)
{
	(void)src;
	return (*this);
}

Serializer::~Serializer()
{
	
}

