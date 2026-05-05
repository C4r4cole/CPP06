/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:23:26 by fmoulin           #+#    #+#             */
/*   Updated: 2026/05/05 18:30:02 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DATA_HPP
# define DATA_HPP

class Data
{
	private:
		int	pace;
		int heart_rate;
		int	ppm;
	public:
		Data();
		Data(const Data &copy);
		Data &operator = (const Data &src);
		~Data();
};

#endif