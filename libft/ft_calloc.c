/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:41:52 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/03 19:50:54 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void ft_bzero(void *str, size_t size)
{
    size_t i;
    char *copysrt;

    i = 0;
    copysrt = (char *)str;

    while(i < size)
    {
        copysrt[i] = 0;
        i++;
    }
}

void *ft_calloc(size_t num, size_t size)
{
    void *p;
    p = malloc(num *size);

    if (p == NULL)
        return(0);
    else
        ft_bzero(p, (num *size));
    
    return(p);
}
/*int main ()
{
    printf("p", ft_calloc(2, 6));
    return(0);
}
CREADOR DE HUECOS
    asigna memoria dinamica a una string empezada por valores nulos
    el uso de esta funcion es para crear una memoria TEMPORAL, luego el espacio reservado con calloc se eliminara con "free"
*/