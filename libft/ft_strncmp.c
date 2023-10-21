/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:08:21 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/12 11:10:44 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	while (size)
	{
		if (s1[i] != s2[i] || s1[i] == 0 || s2[i] == 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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
    char letters2[] = "mundo";

    printf("%d", ft_strncmp(letters, letters2, 3));
    return(0);
}

compara los primeros "size" de caracteres de las cadenas "s1" y "s2";
RETORNA 
    0 si los caracteres comprobados son IGUALES
    OTRO NUM, si hay alguna diferencia devolverá la resta de los mismos
*/
