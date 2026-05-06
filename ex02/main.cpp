/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:32:59 by fmoulin           #+#    #+#             */
/*   Updated: 2026/05/06 14:40:08 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data	original;
	Data*	ptr = &original;

	uintptr_t 	raw = Serializer::serialize(ptr);
	Data*		back = Serializer::deserialize(raw);

	std::cout << "ptr: " << ptr << std::endl;
	std::cout << "raw: " << raw << std::endl;
	std::cout << "back: " << back << std::endl;

	return (0);
}
