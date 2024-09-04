/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:02:30 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/04 15:42:23 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
        // Constructors
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
        // Overloaded Operators
		Fixed &operator=(const Fixed &other);
        float operator>(Fixed fixed)const;
        float operator<(Fixed fixed)const;
        float operator>=(Fixed fixed)const;
        float operator<=(Fixed fixed)const;
        float operator==(Fixed fixed)const;
        float operator!=(Fixed fixed)const;
        float operator+(Fixed fixed)const;
        float operator-(Fixed fixed)const;
        float operator*(Fixed fixed)const;
        float operator/(Fixed fixed)const;
		// Destructor
        ~Fixed();
        // Public Methods
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
        // static Fixed &min(Fixed &a, Fixed &b);
		// static const Fixed &min(Fixed const &a, Fixed const &b);
	private:
		int	_fixed_point_value;
		static const int _n_fract_bits = 8;
};

std::ostream &operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif