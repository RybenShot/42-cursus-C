/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:39:19 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/19 16:15:32 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*copysrc;
	char	*copydest;

	copysrc = (char *)src;
	copydest = (char *)dest;
	if (!copydest && !copysrc)
		return (NULL);
	if (copydest < copysrc)
		ft_memcpy(copydest, copysrc, size);
	else
	{
		while (size--)
			copydest[size] = copysrc[size];
	}
	return (copydest);
}
/*
int main()
{
    char letters[] = "a####";            // dest
    char copyletters[] = "********";        // src

    printf("%p", ft_memmove(letters, copyletters, 5));

    return (0);
}
 copia los primeros "size" valores de "src" a "dest" (hasta si se superponen) 
*/
