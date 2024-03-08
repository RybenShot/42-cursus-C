/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printString.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:58:20 by sejimene          #+#    #+#             */
/*   Updated: 2024/02/27 18:17:59 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *string)
{
	int	count;

	count = 0;
	if (!string)
		return (ft_print_string("(null)"));
	while (*string)
		count += ft_print_char(*string++);
	return (count);
}
