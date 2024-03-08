/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printDigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:58:15 by sejimene          #+#    #+#             */
/*   Updated: 2024/03/08 19:15:53 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit(int digit)
{
	long	counter;

	counter = 0;
	if (digit == -2147483648)
	{
		ft_print_string("-2147483648");
		return (11);
	}
	if (digit < 0)
	{
		counter += ft_print_char('-');
		digit *= -1;
	}
	if (digit > 9)
	{
		counter += ft_print_digit(digit / 10);
		counter += ft_print_digit(digit % 10);
	}
	else
		counter += ft_print_char((digit + '0'));
	return (counter);
}
