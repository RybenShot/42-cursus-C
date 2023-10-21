/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:56:39 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/12 11:59:15 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	str_len;
	size_t	i;

	str_len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	str = (char *)malloc(sizeof(char) * str_len);
	if (!s1 || !s2 || !str)
		return (NULL);
	i = 0;
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = 0;
	return (str);
}
/*
int main ()
{
  char word[] = "hola ";
  char word2[] = "caracola!";

  printf("%s", ft_strjoin(word, word2));
  return(0);
}
Reserva y devuelve una NUEVA string formada por la concaTENACION DE 's1' y 's2'
*/
