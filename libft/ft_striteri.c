/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:27:38 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/19 15:27:38 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			len;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
/*
Aplica la funcion "f" en cada caracter de la cadena "s", OJO!, 
en esta funcion, la tring de origen SI CAMBIA
	RETORNA No retorna NADA, simplemente cierra con el nulo y a tomar por saco

Diferencia entre "strmapi" y "striteri".
	- En strmapi, aplica lo que sea de la funcion a cada caracter 
	de la cadena y RETORNA el resultado en una String nueva de memoria Dinamica
	- En striteri, aplica loq ue sea de la funcion en cada caracter 
	de la cadena Y YA ESTA, no retorna nada, Y MODIFICA la cadena original.
*/