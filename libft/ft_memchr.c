/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:54:48 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/03 16:55:05 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> 
void *ft_memcmp(const void *str, int c, size_t size)
{
    size_t i;
    unsigned char *copystr;

    i = 0;
    copystr = (unsigned char *)str;
    while(size)
    {
        if (copystr[i] == c)
            return(&copystr[i]);
        else
        {
            i++;
            size--;
        }
    }
    return(0);
}
/*
int main ()
{
    char letters[] = "hola";

    printf("%p", ft_memcmp(letters, 'c', 3));
    return(0);
}

busca la primera conincidencia del byte "c" en "str" hasta el tamaño maximo "size"
    RETORNA
        un puntero a la posicion donde ha encontrado al coincidencia
        sino encuentra nada NULL
*/