/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printHex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:58:25 by sejimene          #+#    #+#             */
/*   Updated: 2024/03/08 20:00:39 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long numero, char format)
{
	int		counter;
	char	*hexadecimales;

	hexadecimales = "0123456789abcdef";
	counter = 0;
	if (numero == 0)
		return (ft_print_char('0'));
	else if (numero >= 16)
	{
		counter += ft_print_hex(numero / 16, format);
		counter += ft_print_hex(numero % 16, format);
	}
	else
	{
		if (format == 'X')
		{
			hexadecimales = "0123456789ABCDEF";
			counter += ft_print_char(hexadecimales[numero]);
		}
		else
			counter += ft_print_char(hexadecimales[numero]);
	}
	return (counter);
}
