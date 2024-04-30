/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:56:39 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/12 11:56:39 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  char	*str;                                           // declaramos el puntero que RETORNAREMOS
	size_t	str_len;                                      // declaramos contador de "str" 
	size_t	i;                                            // declaramos contador iterador

	str_len = (ft_strlen(s1) + ft_strlen(s2) + 1);        // medimos cuando mide s1 y s2 +1 (para el cierre)

	str = (char *)malloc(sizeof(char) * str_len);         // reservamos MD para el str con lo que hemos medido antes con "str_len"

	if (!s1 || !s2 || !str)                               // prev de ERRORES //  si el s1 || s2 || str ha llegado ha NULL (alguno de los s1 o s2 esta vacio || el str no se ha generado correctamente)
		return (NULL);                                      // corta ejecucion
	i = 0;                                                // si ha llegado aqui es porque tanto en s1 como s2 tienen valores dentro y str se ha generado correctamente // le damos valor a i 
                                                        // (antes no se lo dimos por si por el camino anterior hubiera habido algun error, el meterle el valor a i habria sido para nada)

	while (*s1)                                           // mientras s1 no llegue a NULL('\0') ...
		str[i++] = *s1++;                                   // COPIA el caracter de s1 a str// (OJO, iteramos para avanzar DENTRO de la misma funcion, a la i se le suma 1(asi iteraremos el str) 
                                                        // y a s1 se le suma uno AL PUNTERO(asi iteraremos CON EL PUNTERO))(RECUERDA: si los ++ se le pusiera ANTES de la variable, sumaria ANTES de ejecutar la reasignacion)
    
	while (*s2)                                           //si llega aqui e sporque s1 ha llegado al valor NULL('\0'). Continuamos exatamente igual que arriba
		str[i++] = *s2++;

	str[i] = 0;                                           // ponemos la guinda para cerrar string
	return (str);                                         // RETORNAMOS el nuevo string concatenado
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
