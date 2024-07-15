/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:16:01 by edegraev          #+#    #+#             */
/*   Updated: 2024/07/15 10:05:54 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &src);
		Fixed &operator=(Fixed const &rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int	fixed_point_value;
		static const int n_fract_bits = 8;
};

#endif