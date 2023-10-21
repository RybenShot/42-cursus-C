/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:28:37 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/12 10:59:13 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	char	*copystr;

	i = 0;
	copystr = (char *)str;
	while (i < len)
	{
		copystr[i] = c;
		i++;
	}
	return (str);
}
/*
int main()
{
    char letters[] = "########";

    printf("%p", ft_memset(letters, '*', 5));

    return (0);
}
                              5                      srt       *
 Cambia los valores de los "size" primeros datos de "srt" por "c"
*/
