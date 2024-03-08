/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:58:40 by sejimene          #+#    #+#             */
/*   Updated: 2024/03/08 19:58:44 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	switcher(char format, va_list args)
{
	int	counter;

	counter = 0;
	if (format == 'c')
		counter = ft_print_char(va_arg(args, int));
	else if (format == 's')
		counter = ft_print_string(va_arg(args, char *));
	else if (format == 'p')
	{
		counter += ft_print_string("0x");
		counter += ft_print_hex(va_arg(args, unsigned long ), format);
	}
	else if (format == 'x' || format == 'X')
		counter = ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == 'd' || format == 'i')
		counter = ft_print_digit(va_arg(args, int));
	else if (format == 'u')
		counter = ft_print_unsig_digit(va_arg(args, unsigned int));
	else if (format == '%')
		counter += ft_print_char('%');
	else
		printf("ha pasado algo ...");
	return (counter);
}

int	ft_printf(char const *str, ...)
{
	int		total_counter;
	va_list	args;

	total_counter = 0;
	va_start (args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			total_counter += switcher(*str++, args);
		}
		else
			total_counter += write(1, str++, 1);
	}
	va_end(args);
	return (total_counter);
}
