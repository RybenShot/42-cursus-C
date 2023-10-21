/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:00:42 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/12 12:04:26 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	fin;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	fin = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (fin > i && ft_strrchr(set, s1[fin]))
		fin--;
	return (ft_substr(s1, i, fin - i + 1));
}
/*
int main ()
{
  char word[] = "caracola";
  char word2[] = "ca";

  printf("%s", ft_strtrim(word, word2)); // RETORNA "racol"
  return(0);
}

 devuelve la cadena "s1" modificada sin los caracteres "set" (IMPORTANTE) 
 EMPIEZA A QUITAR CARACTERES DE IZQUIERDA Y DERECHA (a la vez), quiere 
 decir que si no hay coincidencia en alguno de los 2 lados con los caracteres 
 que haya en "set", dejara de contar desde ese lado(Y continuara desde 
 el otro lado hasta que este deje de coincidir tambien) 
 */
