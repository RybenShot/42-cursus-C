/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:54:48 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/20 08:04:33 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t			i;
	unsigned char	*copystr;

	i = 0;
	copystr = (unsigned char *)str;
	while (size--)
	{
		if (copystr[i] == (unsigned char)c)
			return (&copystr[i]);
		i++;
	}
	return (NULL);
}
/*
int main ()
{
    char letters[] = "hola";

    printf("%p", ft_memcmp(letters, 'c', 3));
    return(0);
}

busca la primera conincidencia del byte "c" en "str" 
hasta el tamaño maximo "size"
    RETORNA
        un puntero a la posicion donde ha encontrado al coincidencia
        sino encuentra nada NULL
*/
