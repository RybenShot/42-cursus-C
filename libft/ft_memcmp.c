/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:00:48 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/20 08:12:56 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t			i;
	unsigned char	*copys1;
	unsigned char	*copys2;

	i = 0;
	copys1 = (unsigned char *)s1;
	copys2 = (unsigned char *)s2;
	while (size)
	{
		if (copys1[i] != copys2[i])
			return (copys1[i] - copys2[i]);
		else
		{
			i++;
			size--;
		}
	}
	return (0);
}
/*int main ()
{
    char letters[] = "hola";
    char letters2[] = "hoya";

    printf("%d", ft_memcmp(letters, letters2, 3));
    return(0);
}
compara los primeros "size" valores de "s1" y "s2"
RETORNA 0 si las comparaciones son exactamente iguales
    sino RETORNA la resta de los 2
*/
