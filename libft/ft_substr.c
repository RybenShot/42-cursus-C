/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:50:28 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/12 11:55:35 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = malloc(sizeof(char) * (len +1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s + start, len + 1);
	return (str);
}
/* 
int main ()
{
  char letters[] = "hola caracola";

  printf("%s", ft_substr(letters, 2, 4));
  return 0;
}
asigna MD a una string creada a partir del indice 
(start) de "s" con la longitud "len" 
*/
