/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:06:18 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/12 13:12:24 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numberlen(long n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		c++;
		n = -n;
		ft_numberlen(n);
	}
	if (n == 0)
	{
		c++;
		return (c);
	}
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	long	nmb;
	long	len;
	char	*str;

	nmb = (long)n;
	len = ft_numberlen(nmb);
	str = (char *)malloc(sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	if (nmb < 0)
	{
		str[0] = '-';
		nmb = -nmb;
	}
	if (nmb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nmb > 0)
	{
		str[len] = nmb % 10 + 48;
		nmb = nmb / 10;
		len--;
	}
	return (str);
}
/*
int main ()
{
  char number = -100;

  printf("%s", ft_itoa(number));
  return(0);
}
Creamos tres variables: 
  una para conocer la dimensión del entero, 
  otra para modificarla a tipo 'long' 
  y una reserva de memoria.
*/