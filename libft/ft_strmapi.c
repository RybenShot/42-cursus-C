/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:22:29 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/19 15:22:29 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main ()
{
    char letters[] = "hola";

    printf("%d", ft_strmapi(letters, ));
    return(0);
}
Aplica la funcion "f" en cada caracter de la cadena "s"
	RETORNA una copia de "s" en MD(memoria dinamica)


NO LO ENTIENDO DEL TODO
	entiendo la teoria, pero no entiendo como ponerlo en 
	practica, nose como es la sintaxis para que esto funcione
*/