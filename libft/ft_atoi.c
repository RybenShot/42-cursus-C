/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:03:42 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/20 07:57:13 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	atoi;
	int		sign;

	atoi = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		atoi *= 10;
		atoi += *str - 48;
		str++;
	}
	return (atoi * sign);
}
/*int main ()
{
    char numbers[] = "42_3456";
    printf("d", ft_atoi(numbers));
    return(0);
}
*/
