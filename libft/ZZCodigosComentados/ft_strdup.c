/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:52:02 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/03 20:05:17 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strlen(const char *s)
{
    int i;
    i = 0;

    while (s[i] != '\0')
        i++;
    return(i);
}
char ft_strdup(const char *str)
{
    int i;                                          // iterador
    int size;                                       // llega al final de string (para generar (size) huecos despues)
    char *copystr;                                  // generamos un puntero de caracteres donde la cantidad de memoria es la misma de str +1 (el +1 es para posteriormente meter el '\0'

    i = 0;
    size = ft_strlen(str);
    copystr = (char *)malloc(sizeof(*copystr) * (size + 1));

    if (copystr == NULL)                            // la comprobacion por si algo sale mal al asigna la copia
        return(0);

    while (i < size)                                // copiamos todos los caracteres dek original a la copia dinamica
    {
        copystr[i] = str[i];
        i++;
    }
    
    copystr[i] = '\0';                              // ponemos el nulo para cerrar la copia..
    return(copystr);                                // RETORNAMOS el puntero de la copia, para posteriormente usarlo
    
}

int main ()
{
    char word[] = "hello!";
    printf("s", ft_strdup(word));
    return(0);
}
/*
COPIA Y CREACION DE UNA MEMORIA DINAMICA
    hace una copia dinamica de la cadena "str"
*/