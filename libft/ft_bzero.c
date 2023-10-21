/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:30:44 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/12 10:32:08 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	ft_bzero(void *str, size_t size)
{
	size_t	i;
	char	*copysrt;

	i = 0;
	copysrt = (char *)str;
	while (i < size)
	{
		copysrt[i] = 0;
		i++;
	}
}
/*
int main()
{
    char letters[] = "########";

    ft_bzero(letters, 5);

    return (0);
}
              \0                         5                       srt
convierte en NULO los valores de los "size" primeros datos de "srt"
*/
