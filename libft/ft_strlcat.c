/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:47:25 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/12 10:58:23 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*copysrc;

	copysrc = (char *)src;
	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (copysrc[j] != '\0' && (i + j + 1) < size)
	{
		dest[i + j] = copysrc[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (ft_strlen(copysrc) + i);
}
/*
concatena la cadena "src" en "dest" hasta que este 
llegue a su maximo(size) terminando en nulo
*/
