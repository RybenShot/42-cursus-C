/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printUnsigDigit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:58:29 by sejimene          #+#    #+#             */
/*   Updated: 2024/02/27 18:19:57 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsig_digit(unsigned int digit)
{
	long	counter;

	counter = 0;
	if (digit > 9)
	{
		counter += ft_print_unsig_digit(digit / 10);
		counter += ft_print_unsig_digit(digit % 10);
	}
	else
		counter += ft_print_char(digit + '0');
	return (counter);
}
