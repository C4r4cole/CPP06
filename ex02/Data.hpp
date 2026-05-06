/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:23:26 by fmoulin           #+#    #+#             */
/*   Updated: 2026/05/06 13:08:27 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <stdint.h>

class Data
{
	private:
		std::string	_name;
		int			_pace;
	public:
		Data();
		Data(std::string name);
		Data(const Data &copy);
		Data &operator = (const Data &src);
		~Data();
};

#endif